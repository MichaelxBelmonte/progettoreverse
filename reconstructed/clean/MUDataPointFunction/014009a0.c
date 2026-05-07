// Function: FUN_014009a0
// Address: 014009a0
// Size: 504 bytes
// Class: MUDataPointFunction

int64_t * FUN_014009a0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0xc))) {
    uVar7 = 0;
    uVar6 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar5 * 8);
        if ((int)uVar5 != 0) {
          local_58 = '\0';
          lVar3 = **(int64_t **)(*param_2 + 0x10);
          local_38 = 0;
          local_60 = lVar2;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\x01';
          local_40 = lVar3;
          FUN_00d98db0(&local_40,&local_60,0,param_4,uVar6,uVar7);
          lVar3 = local_50;
          lVar2 = *arg1;
          if (lVar2 == local_50) {
            if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01400afd;
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01400af8;
            }
LAB_01400ac2:
            *(void*)(arg1 + 1) = 1;
            local_48 = '\0';
          }
          else {
            lVar4 = arg1[1];
            if (local_48 != '\0') {
              *arg1 = local_50;
              if (((char)lVar4 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01400ac2;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            *arg1 = lVar3;
            if (((char)lVar4 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400af8:
            *(void*)(arg1 + 1) = 1;
LAB_01400afd:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0xffffffff;
      } while ((int)uVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
  }
  return this_ptr;
}

