// Function: FUN_00ade790
// Address: 00ade790
// Size: 513 bytes
// Class: TSocket


void FUN_00ade790(string *param_1,sockaddr *param_2,socklen_t *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  byte *pbVar4;
  sockaddr local_4dc;
  char *in_stack_fffffffffffffb38;
  socklen_t in_stack_fffffffffffffb40;
  int in_stack_fffffffffffffb48;
  undefined1 local_b0;
  char cStack_af;
  undefined6 uStack_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)(unaff_RSI + 0x48) & 1) == 0) {
    if (*(byte *)(unaff_RSI + 0x48) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(longlong *)(unaff_RSI + 0x50) != 0) goto LAB_00ade8ab;
  pbVar4 = (byte *)(unaff_RSI + 0x48);
  if ((*(byte *)(unaff_RSI + 0x28) & 1) == 0) {
    if (*(byte *)(unaff_RSI + 0x28) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(longlong *)(unaff_RSI + 0x30) != 0) goto LAB_00ade8ab;
  if (*(int *)(unaff_RSI + 0x40) == -1) goto LAB_00ade8ab;
  if (*(char *)(unaff_RSI + 0xad) == '\x1e') {
    local_4dc.sa_len = '\x1c';
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
  }
  else if (*(char *)(unaff_RSI + 0xad) == '\x02') {
    local_4dc.sa_len = '\x10';
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
  }
  else {
    local_4dc.sa_len = 0x80;
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
    param_2 = &local_4dc;
    iVar2 = _getpeername((int)param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_00ade8ab;
    if ((*(byte *)(unaff_RSI + 0x28) & 1) == 0) {
      uVar3 = (ulonglong)(*(byte *)(unaff_RSI + 0x28) >> 1);
    }
    else {
      uVar3 = *(ulonglong *)(unaff_RSI + 0x30);
    }
    if (uVar3 == 0) {
      if (cStack_af == '\x1e') {
        if (local_4dc._0_4_ == 0x1c) {
          *(undefined4 *)(unaff_RSI + 0xc4) = local_98;
          *(undefined8 *)(unaff_RSI + 0xbc) = local_a0;
          goto LAB_00ade92e;
        }
      }
      else if ((cStack_af == '\x02') && (local_4dc._0_4_ == 0x10)) {
LAB_00ade92e:
        *(undefined8 *)(unaff_RSI + 0xb4) = local_a8;
        *(ulonglong *)(unaff_RSI + 0xac) = CONCAT62(uStack_ae,CONCAT11(cStack_af,local_b0));
      }
      if ((*(byte *)(unaff_RSI + 0x60) & 1) == 0) {
        *(undefined2 *)(unaff_RSI + 0x60) = 0;
      }
      else {
        **(undefined1 **)(unaff_RSI + 0x70) = 0;
        *(undefined8 *)(unaff_RSI + 0x68) = 0;
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(unaff_RSI + 0x58) = 0;
        *(undefined8 *)(unaff_RSI + 0x50) = 0;
      }
    }
  }
  param_2 = (sockaddr *)&stack0xfffffffffffffb48;
  param_1 = (string *)((longlong)&segment_command_000003d8.fileoff + 1);
  _getnameinfo((sockaddr *)((longlong)&segment_command_000003d8.fileoff + 1),(socklen_t)param_2,
               local_4dc.sa_data + 2,0x20,in_stack_fffffffffffffb38,in_stack_fffffffffffffb40,
               in_stack_fffffffffffffb48);
  std::string::assign((char *)param_1);
LAB_00ade8ab:
  std::string::string(param_1,(string *)param_2);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


