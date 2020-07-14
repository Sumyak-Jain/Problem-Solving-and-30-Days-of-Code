import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class BST_level{

static void levelOrder(Node root){
      //Write your code here
       Queue<Node> q = new LinkedList<Node>();
      q.add(root);
      while(q.peek()!=null)
          {
          Node node =q.remove();
          System.out.print(""+node.data+" ");
          if(node.left!=null)
              q.add(node.left);
          if(node.right!=null)
              q.add(node.right);
      }
      
    }

public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}
