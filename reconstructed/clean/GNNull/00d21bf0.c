// Function: FUN_00d21bf0
// Address: 00d21bf0
// Size: 1931 bytes
// Class: GNNull

void FUN_00d21bf0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  void*arg1;
  int64_t this_ptr;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  FUN_00d50cd0();
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar11 = g_0277cf70;
  lVar10 = g_0277cf50;
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    if (g_0277cf70 != 0) {
      FUN_00d50b00();
    }
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf78;
    if (iVar5 == 0) {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf78 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x598))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (1 < iVar5) {
      uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
      *(void*)(this_ptr + 0x1c) = uVar4;
      if (iVar5 != 2) {
        uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
        *(void*)(this_ptr + 0x1d) = uVar4;
        if (3 < iVar5) {
          uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
          *(void*)(this_ptr + 0x1e) = uVar4;
        }
      }
    }
    iVar5 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
    iVar6 = FUN_00e83090();
    iVar9 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(this_ptr + 0x18) = iVar9 >> 3;
    uVar7 = FUN_00e83060();
    *(void*)(this_ptr + 0x10) = uVar7;
    if (0 < iVar5) {
      do {
        (**(code **)(*(int64_t *)*arg1 + 0x470))();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        iVar9 = *(int *)(this_ptr + 0xc);
        *(int *)(this_ptr + 0xc) = iVar9 + 1;
        FUN_00d23090();
        cVar3 = *(char *)(this_ptr + 0x1c);
        *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)iVar9 * 8) = local_48;
        if ((cVar3 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (g_0277cf50 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf50;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf50 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x510))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (*(char *)(this_ptr + 0x1c) == '\0') {
          uVar8 = *(uint *)(this_ptr + 0xc);
          if (0 < (int)uVar8) {
            lVar10 = (uint64_t)uVar8 + 1;
            do {
              uVar8 = uVar8 - 1;
              if (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (uint64_t)uVar8 * 8) != 0) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + -1;
            } while (1 < lVar10);
          }
        }
        *(void*)(this_ptr + 0x1c) = 1;
      }
    }
    lVar10 = g_0277cf58;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf58 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf58;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf58 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(void*)(this_ptr + 0x1d) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar10 = g_0277cf60;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf60 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf60;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf60 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(void*)(this_ptr + 0x1e) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x390))();
    lVar10 = g_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf68 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00e83090();
      iVar9 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      *(int *)(this_ptr + 0x18) = iVar9 >> 3;
      uVar7 = FUN_00e83060();
      *(void*)(this_ptr + 0x10) = uVar7;
      if (0 < iVar5) {
        iVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        do {
          plVar1 = (int64_t *)*arg1;
          FUN_00d93550();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          (**(code **)(*plVar1 + 0x578))();
          if (local_48 == lVar10) {
            if ((!bVar2) && (local_48 != 0)) {
              lVar11 = lVar10;
              if (local_40 != '\0') goto LAB_00d221c4;
              FUN_00d50b00();
              goto LAB_00d22230;
            }
            if (local_40 == '\0') goto LAB_00d22258;
LAB_00d2223a:
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            lVar11 = local_48;
            if (bVar2) {
              bVar12 = lVar10 == 0;
              lVar10 = local_48;
              bVar2 = true;
              if (bVar12) goto LAB_00d22258;
              FUN_00d50b20();
            }
LAB_00d22230:
            lVar10 = lVar11;
            bVar2 = true;
            if (local_40 != '\0') goto LAB_00d2223a;
          }
          else {
            lVar11 = local_48;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_00d221c4:
            local_40 = '\0';
            lVar10 = lVar11;
            bVar2 = true;
          }
LAB_00d22258:
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((lVar10 != 0) || (*(char *)(this_ptr + 0x1d) != '\0')) {
            iVar6 = *(int *)(this_ptr + 0xc);
            *(int *)(this_ptr + 0xc) = iVar6 + 1;
            FUN_00d23090();
            if ((*(char *)(this_ptr + 0x1c) == '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)iVar6 * 8) = lVar10;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      FUN_00e5a7d0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

