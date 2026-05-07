// Function: FUN_00ade790
// Address: 00ade790
// Size: 513 bytes
// Class: TSocket

void FUN_00ade790(string *param_1,sockaddr *param_2,socklen_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t arg1;
  byte *pbVar4;
  sockaddr local_4dc;
  char *in_stack_fffffffffffffb38;
  socklen_t in_stack_fffffffffffffb40;
  int in_stack_fffffffffffffb48;
  uint8_t local_b0;
  char cStack_af;
  undefined6 uStack_ae;
  uint64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)(arg1 + 0x48) & 1) == 0) {
    if (*(byte *)(arg1 + 0x48) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(int64_t *)(arg1 + 0x50) != 0) goto LAB_00ade8ab;
  pbVar4 = (byte *)(arg1 + 0x48);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(int64_t *)(arg1 + 0x30) != 0) goto LAB_00ade8ab;
  if (*(int *)(arg1 + 0x40) == -1) goto LAB_00ade8ab;
  if (*(char *)(arg1 + 0xad) == '\x1e') {
    local_4dc.sa_len = '\x1c';
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
  }
  else if (*(char *)(arg1 + 0xad) == '\x02') {
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
    if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
      uVar3 = (uint64_t)(*(byte *)(arg1 + 0x28) >> 1);
    }
    else {
      uVar3 = *(uint64_t *)(arg1 + 0x30);
    }
    if (uVar3 == 0) {
      if (cStack_af == '\x1e') {
        if (local_4dc._0_4_ == 0x1c) {
          *(void*)(arg1 + 0xc4) = local_98;
          *(void*)(arg1 + 0xbc) = local_a0;
          goto LAB_00ade92e;
        }
      }
      else if ((cStack_af == '\x02') && (local_4dc._0_4_ == 0x10)) {
LAB_00ade92e:
        *(void*)(arg1 + 0xb4) = local_a8;
        *(uint64_t *)(arg1 + 0xac) = CONCAT62(uStack_ae,CONCAT11(cStack_af,local_b0));
      }
      if ((*(byte *)(arg1 + 0x60) & 1) == 0) {
        *(void*)(arg1 + 0x60) = 0;
      }
      else {
        **(void**)(arg1 + 0x70) = 0;
        *(void*)(arg1 + 0x68) = 0;
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(void**)(arg1 + 0x58) = 0;
        *(void*)(arg1 + 0x50) = 0;
      }
    }
  }
  param_2 = (sockaddr *)&stack0xfffffffffffffb48;
  param_1 = (string *)((int64_t)&segment_command_000003d8.fileoff + 1);
  _getnameinfo((sockaddr *)((int64_t)&segment_command_000003d8.fileoff + 1),(socklen_t)param_2,
               local_4dc.sa_data + 2,0x20,in_stack_fffffffffffffb38,in_stack_fffffffffffffb40,
               in_stack_fffffffffffffb48);
  std::string::assign((char *)param_1);
LAB_00ade8ab:
  std::string::string(param_1,(string *)param_2);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}

