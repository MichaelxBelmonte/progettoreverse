// Function: FUN_00cce050
// Address: 00cce050
// Size: 530 bytes
// Class: GNBCFA

void FUN_00cce050(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    if (arg1[2] == 0) {
      if ((g_028a7340 == 0) || (g_028a7349 == '\0')) {
        FUN_00e8cb50();
        if (g_028a7340 == 0) {
          FUN_00c8e600();
          lVar2 = g_028a7340;
          if (g_028a7340 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar2 = 0;
              }
              else {
                FUN_00d50b00();
                lVar2 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar2 = local_40;
            }
            bVar4 = g_028a7340 != 0;
            g_028a7340 = lVar2;
            if (bVar4) {
              FUN_00d50b20();
              lVar2 = local_40;
            }
          }
          if ((lVar2 != 0) && (g_028a7348 == '\0')) {
            g_028a7348 = '\x01';
            FUN_00e8cb90();
            lVar2 = local_40;
          }
          if ((local_38 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          g_028a7349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028a7349 = '\x01';
          FUN_00e8cb70();
        }
      }
      uVar1 = *(void*)(g_028a7340 + 0x10);
      iVar3 = *(int *)(g_028a7340 + 0x18);
      do {
        if (param_2 < iVar3) {
          iVar3 = (int)param_2;
        }
        (**(code **)(*arg1 + 0x388))(iVar3,uVar1);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_00cce24d;
          }
        }
        else if (local_40 != 0) {
LAB_00cce24d:
          *this_ptr = local_40;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        param_2 = param_2 - iVar3;
        if (param_2 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          return;
        }
      } while( true );
    }
    iVar3 = (int)arg1[5] + (int)param_2;
    if (*(int *)(arg1[2] + 0x18) < iVar3) {
      FUN_00c8e340(iVar3,0);
    }
    ___bzero();
    iVar3 = (int)arg1[5] + (int)param_2;
    *(int *)(arg1 + 5) = iVar3;
    if (*(int *)((int64_t)arg1 + 0x2c) < iVar3) {
      *(int *)((int64_t)arg1 + 0x2c) = iVar3;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

