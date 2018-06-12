ipaddr=192.168.13.12
echo $ipaddr |awk -F . '{for(i=1;i<=NF;i++){print $i;}}'
