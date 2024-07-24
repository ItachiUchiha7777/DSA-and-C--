class Node{
    constructor(val){
        this.val = val;
        this.left=left;
        this.right=right;
    }
}

const a=new Node("a");
const b=new Node("a");
const c=new Node("a");
const d=new Node("a");
const e=new Node("a");
const f=new Node("a");

a.left=b;
b.right=c;
b.left=d;
b.right=e;
c.right=f;
