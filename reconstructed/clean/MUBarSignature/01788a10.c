// Function: FUN_01788a10
// Address: 01788a10
// Size: 938 bytes
// Class: MUBarSignature

int64_t * FUN_01788a10(uint64_t param_1,void*param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  uint64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  local_c0 = 0;
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_c0 = *param_4;
  }
  local_d0 = *param_2;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_017891f0(param_1,&local_d0,param_3,&local_c0);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_01788b06;
    }
  }
  else if (local_88 != 0) {
LAB_01788b06:
    cVar3 = FUN_01716c00();
    if (cVar3 == '\0') {
      FUN_01715620();
      FUN_017181f0();
      if (local_88 != 0) {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01788bb0;
      }
      bVar2 = false;
      lVar1 = *param_4;
    }
    else {
      FUN_01715620();
      FUN_017185b0();
      if (local_88 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_80 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_01788bb0:
      lVar1 = *param_4;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        iVar5 = 0;
        do {
          cVar3 = FUN_01716c00();
          if (cVar3 == '\0') {
            FUN_01715620();
            FUN_017181f0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01715620();
            FUN_017185b0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00d235a0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int64_t)puVar4 + 0xc));
      }
      FUN_01a74380();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar2) && (local_88 != 0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_88;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto LAB_01788d90;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01788d90:
  FUN_00d50b20();
  return this_ptr;
}

