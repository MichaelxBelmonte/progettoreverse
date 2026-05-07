// Function: FUN_00e225e0
// Address: 00e225e0
// Size: 1191 bytes
// Class: GNFileType

void FUN_00e225e0(void)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  void*puVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  
  cVar6 = FUN_00e20b20();
  lVar4 = g_02785a30;
  if (cVar6 == '\0') {
    if (g_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2) ==
           0x5b) {
    *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar4 = g_02785a38;
    if (cVar6 != '\0') {
      if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2) ==
          0x5d) {
        *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        *this_ptr = puVar7;
      }
      else {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        while (FUN_00e20d30(), lVar4 = g_02785a40, local_a0 != '\0') {
          if (local_a8 != 0) goto LAB_00e227c3;
LAB_00e227ce:
          if (*(char *)(arg1 + 0xd) != '\0') {
            bVar3 = true;
            FUN_00d227d0();
            goto LAB_00e227ee;
          }
          if (*(char *)(arg1 + 0xe) == '\0') {
            if (g_02785a40 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            goto LAB_00e22a74;
          }
LAB_00e22880:
          if ((*(int *)(arg1 + 0x34) <= *(int *)(arg1 + 0x30)) ||
             (puVar7 == (void*)0x0)) goto LAB_00e229d3;
        }
        if (local_a8 == 0) goto LAB_00e227ce;
        FUN_00d50b00();
LAB_00e227c3:
        bVar3 = false;
LAB_00e227ee:
        FUN_00d21140();
        cVar6 = FUN_00e20b20();
        lVar5 = g_02785a50;
        lVar4 = g_02785a48;
        if (cVar6 == '\0') {
          if (g_02785a48 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar3) {
            FUN_00d50b20();
          }
          goto LAB_00e22a74;
        }
        iVar2 = *(int *)(arg1 + 0x30);
        sVar1 = *(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)iVar2 * 2);
        if (sVar1 == 0x2c) {
          *(int *)(arg1 + 0x30) = iVar2 + 1;
          cVar6 = FUN_00e20b20();
          lVar5 = g_02785a58;
          lVar4 = g_02785a38;
          if (cVar6 == '\0') {
            if (g_02785a38 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
LAB_00e22a74:
            *this_ptr = 0;
            goto LAB_00e22a7c;
          }
          if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2)
              != 0x5d) {
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22880;
          }
          if (*(char *)(arg1 + 0xf) == '\0') {
            if (g_02785a58 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
        else {
          if (sVar1 != 0x5d) {
            if (g_02785a50 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (!bVar3) {
              FUN_00d50b20();
            }
            goto LAB_00e22a74;
          }
          *(int *)(arg1 + 0x30) = iVar2 + 1;
          if (!bVar3) {
            FUN_00d50b20();
          }
        }
LAB_00e229d3:
        *this_ptr = puVar7;
      }
LAB_00e22a7c:
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    if (g_02785a38 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_02785a30 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

