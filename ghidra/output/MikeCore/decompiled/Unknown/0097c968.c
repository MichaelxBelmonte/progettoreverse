// Function: FUN_0097c968
// Address: 0097c968
// Size: 1422 bytes
// Class: Unknown


void FUN_0097c968(undefined4 param_1,string *param_2)

{
  longlong lVar1;
  string *psVar2;
  ulonglong uVar3;
  string *this;
  undefined8 *puVar4;
  longlong *unaff_RDI;
  undefined4 local_res8;
  longlong local_res18;
  string *local_res20;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  string *local_60;
  longlong local_58;
  
  lVar1 = FUN_008dfe28();
  psVar2 = (string *)(longlong)*(int *)(lVar1 + 0x13c);
  this = (string *)(*(longlong *)(local_res20 + 0x20) - *(longlong *)(local_res20 + 0x18));
  if (this < psVar2) {
    FUN_0088d550();
  }
  else if (psVar2 < this) {
    *(string **)(local_res20 + 0x20) = psVar2 + *(longlong *)(local_res20 + 0x18);
  }
  FUN_009e9d9c();
  local_res20[0x1e2] = (string)0x1;
  std::string::operator=(this,param_2);
  *(undefined2 *)(local_res20 + 0x1e0) = 0x101;
  *(undefined4 *)(local_res20 + 0x40) = param_1;
  std::string::operator=(this,param_2);
  if (local_res20[0x1e3] == (string)0x0) {
LAB_0097ca32:
    local_res20[0x1e3] = (string)0x1;
    FUN_008dfe28();
    std::string::operator=(this,param_2);
  }
  else {
    if (((byte)local_res20[0x78] & 1) == 0) {
      uVar3 = (ulonglong)((byte)local_res20[0x78] >> 1);
    }
    else {
      uVar3 = *(ulonglong *)(local_res20 + 0x80);
    }
    if (uVar3 == 0) goto LAB_0097ca32;
  }
  local_res20[0x392] = (string)0x1;
  std::string::operator=(this,param_2);
  *(undefined2 *)(local_res20 + 0x390) = 0x101;
  *(undefined4 *)(local_res20 + 0x1f0) = local_res8;
  std::string::operator=(this,param_2);
  if (local_res20[0x393] != (string)0x0) {
    if (((byte)local_res20[0x228] & 1) == 0) {
      uVar3 = (ulonglong)((byte)local_res20[0x228] >> 1);
    }
    else {
      uVar3 = *(ulonglong *)(local_res20 + 0x230);
    }
    if (uVar3 != 0) goto LAB_0097cacb;
  }
  local_res20[0x393] = (string)0x1;
  FUN_008dfe28();
  std::string::operator=(this,param_2);
LAB_0097cacb:
  FUN_0094c1c0();
  local_res20[0x75f] = (string)0x1;
  FUN_0097e92b();
  if (((byte)local_res20[0x670] & 1) != 0) {
    operator_delete(this);
  }
  *(undefined8 *)(local_res20 + 0x680) = local_2b8;
  psVar2 = (string *)CONCAT44(uStack_2bc,uStack_2c0);
  *(string **)(local_res20 + 0x678) = psVar2;
  *(undefined8 *)(local_res20 + 0x670) = local_2c8;
  local_res20[0x75e] = (string)0x1;
  FUN_0090617e();
  if (local_res18 != 0) {
    local_res20[0x760] = (string)0x1;
    FUN_009059a6();
    FUN_0097cf46();
  }
  local_res20[0x6f7] = (string)0x0;
  FUN_00abbdc0();
  if (*(longlong *)(local_res20 + 0x738) != 0) {
    *(longlong *)(local_res20 + 0x740) = *(longlong *)(local_res20 + 0x738);
    operator_delete(psVar2);
    *(undefined8 *)(local_res20 + 0x748) = 0;
    *(undefined8 *)(local_res20 + 0x740) = 0;
    *(undefined8 *)(local_res20 + 0x738) = 0;
  }
  *(undefined4 *)(local_res20 + 0x738) = (undefined4)local_2c8;
  *(undefined4 *)(local_res20 + 0x73c) = local_2c8._4_4_;
  *(undefined4 *)(local_res20 + 0x740) = uStack_2c0;
  *(undefined4 *)(local_res20 + 0x744) = uStack_2bc;
  *(undefined8 *)(local_res20 + 0x748) = local_2b8;
  FUN_009d4f26();
  local_res20[0x461] = (string)0x1;
  std::string::string(psVar2,param_2);
  if (((byte)local_res20[0x3b8] & 1) != 0) {
    operator_delete(psVar2);
  }
  *(undefined8 *)(local_res20 + 0x3c8) = local_2b8;
  psVar2 = (string *)CONCAT44(uStack_2bc,uStack_2c0);
  *(string **)(local_res20 + 0x3c0) = psVar2;
  *(undefined8 *)(local_res20 + 0x3b8) = local_2c8;
  local_res20[0x462] = (string)0x1;
  std::string::string(psVar2,param_2);
  if (((byte)local_res20[0x3d0] & 1) != 0) {
    operator_delete(psVar2);
  }
  *(undefined8 *)(local_res20 + 0x3e0) = local_2b8;
  psVar2 = (string *)CONCAT44(uStack_2bc,uStack_2c0);
  *(string **)(local_res20 + 0x3d8) = psVar2;
  *(undefined8 *)(local_res20 + 0x3d0) = local_2c8;
  local_res20[0x463] = (string)0x1;
  std::string::string(psVar2,param_2);
  if (((byte)local_res20[1000] & 1) != 0) {
    operator_delete(psVar2);
  }
  *(undefined8 *)(local_res20 + 0x3f8) = local_2b8;
  *(ulonglong *)(local_res20 + 0x3f0) = CONCAT44(uStack_2bc,uStack_2c0);
  *(undefined8 *)(local_res20 + 1000) = local_2c8;
  psVar2 = local_res20;
  (**(code **)(*unaff_RDI + 0x20))();
  FUN_008de810();
  puVar4 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0x101;
  local_70 = 0;
  FUN_009e9ef6();
  if ((local_2b0 & 1) != 0) {
    operator_delete(puVar4);
  }
  FUN_008d6858();
  std::string::operator=(local_60,psVar2);
  FUN_008d6858();
  std::string::operator=(local_60,psVar2);
  FUN_008d6858();
  std::string::operator=(local_60,psVar2);
  FUN_008d6858();
  std::string::operator=(local_60,psVar2);
  std::string::operator=(local_60,psVar2);
  lVar1 = *(longlong *)(local_res20 + 0x770);
  if (lVar1 == *(longlong *)(local_res20 + 0x778)) {
    lVar1 = (lVar1 - *(longlong *)(local_res20 + 0x768) >> 5) * -0x79435e50d79435e5;
    if (0x6bca1af286bca1 < lVar1 + 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008e4528(local_res20 + 0x778,lVar1);
    FUN_008de980();
    local_58 = local_58 + 0x260;
    FUN_008e4494();
    FUN_008e4598();
  }
  else {
    FUN_008de980();
    *(longlong *)(local_res20 + 0x770) = lVar1 + 0x260;
  }
  FUN_008de4f0();
  FUN_009d5068();
  return;
}


