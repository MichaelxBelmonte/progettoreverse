// Function: FUN_00ade570
// Address: 00ade570
// Size: 530 bytes
// Class: TSocket

void FUN_00ade570(string *param_1,sockaddr *param_2,socklen_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t arg1;
  byte *pbVar4;
  sockaddr local_4ec;
  char *in_stack_fffffffffffffb28;
  socklen_t in_stack_fffffffffffffb30;
  int in_stack_fffffffffffffb38;
  uint8_t local_b8;
  char cStack_b7;
  undefined6 uStack_b6;
  uint64_t local_b0;
  uint64_t local_a8;
  uint32_t local_a0;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)(arg1 + 0x60) & 1) == 0) {
    if (*(byte *)(arg1 + 0x60) >> 1 != 0) goto LAB_00ade68d;
  }
  else if (*(int64_t *)(arg1 + 0x68) != 0) goto LAB_00ade68d;
  pbVar4 = (byte *)(arg1 + 0x60);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 != 0) goto LAB_00ade68d;
  }
  else if (*(int64_t *)(arg1 + 0x30) != 0) goto LAB_00ade68d;
  if (*(int *)(arg1 + 0x40) == -1) goto LAB_00ade68d;
  param_1 = (string *)(arg1 + 0xac);
  if (*(char *)(arg1 + 0xad) == '\x1e') {
    local_4ec.sa_len = '\x1c';
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
  }
  else if (*(char *)(arg1 + 0xad) == '\x02') {
    local_4ec.sa_len = '\x10';
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
  }
  else {
    local_4ec.sa_len = 0x80;
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
    param_2 = &local_4ec;
    iVar2 = _getpeername((int)param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_00ade68d;
    if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
      uVar3 = (uint64_t)(*(byte *)(arg1 + 0x28) >> 1);
    }
    else {
      uVar3 = *(uint64_t *)(arg1 + 0x30);
    }
    if (uVar3 == 0) {
      if (cStack_b7 == '\x1e') {
        if (local_4ec._0_4_ == 0x1c) {
          *(void*)(arg1 + 0xc4) = local_a0;
          *(void*)(arg1 + 0xbc) = local_a8;
          goto LAB_00ade71c;
        }
      }
      else if ((cStack_b7 == '\x02') && (local_4ec._0_4_ == 0x10)) {
LAB_00ade71c:
        *(void*)(arg1 + 0xb4) = local_b0;
        *(uint64_t *)(arg1 + 0xac) = CONCAT62(uStack_b6,CONCAT11(cStack_b7,local_b8));
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(void**)(arg1 + 0x70) = 0;
        *(void*)(arg1 + 0x68) = 0;
      }
      if ((*(byte *)(arg1 + 0x48) & 1) == 0) {
        *(void*)(arg1 + 0x48) = 0;
      }
      else {
        **(void**)(arg1 + 0x58) = 0;
        *(void*)(arg1 + 0x50) = 0;
      }
    }
  }
  param_2 = (sockaddr *)&stack0xfffffffffffffb38;
  param_1 = (string *)((int64_t)&segment_command_000003d8.fileoff + 1);
  _getnameinfo((sockaddr *)((int64_t)&segment_command_000003d8.fileoff + 1),(socklen_t)param_2,
               local_4ec.sa_data + 2,0x20,in_stack_fffffffffffffb28,in_stack_fffffffffffffb30,
               in_stack_fffffffffffffb38);
  std::string::assign((char *)param_1);
  iVar2 = _atoi((char *)param_1);
  *(int *)(arg1 + 0x78) = iVar2;
LAB_00ade68d:
  std::string::string(param_1,(string *)param_2);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}

