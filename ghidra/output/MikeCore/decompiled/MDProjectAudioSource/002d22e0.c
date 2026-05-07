// Function: FUN_002d22e0
// Address: 002d22e0
// Size: 1695 bytes
// Class: MDProjectAudioSource


/* WARNING: Removing unreachable block (ram,0x002d24da) */
/* WARNING: Removing unreachable block (ram,0x002d24e7) */
/* WARNING: Removing unreachable block (ram,0x002d28e5) */
/* WARNING: Removing unreachable block (ram,0x002d28f2) */

undefined8 FUN_002d22e0(ulonglong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_b8;
  char local_b0;
  longlong *local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_00d50b00();
    local_80 = '\0';
    local_88 = (longlong *)0x0;
    uVar1 = *(uint *)(lVar2 + 0xc);
    param_1 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) {
      uVar11 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if (uVar1 == 1) {
        uVar8 = 0;
        uVar11 = 0;
      }
      else {
        uVar8 = 0;
        uVar11 = 0;
        do {
          lVar10 = *(longlong *)(lVar2 + uVar8 * 8);
          if (*(int *)(lVar10 + 0x24) == 1) {
            if (*(int *)(lVar10 + 0x20) == 1) {
              uVar11 = 1;
            }
            local_88 = *(longlong **)(lVar2 + 8 + uVar8 * 8);
            iVar5 = *(int *)((longlong)local_88 + 0x24);
          }
          else {
            local_88 = *(longlong **)(lVar2 + 8 + uVar8 * 8);
            iVar5 = *(int *)((longlong)local_88 + 0x24);
          }
          if ((iVar5 == 1) && ((int)local_88[4] == 1)) {
            uVar11 = 1;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar1 & 0xfffffffe) != (uint)uVar8);
      }
      if ((uVar1 & 1) != 0) {
        param_1 = uVar8 & 0xffffffff;
        local_88 = *(longlong **)(lVar2 + param_1 * 8);
        if ((*(int *)((longlong)local_88 + 0x24) == 1) && ((int)local_88[4] == 1)) {
          uVar11 = 1;
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  plVar3 = local_88;
  lVar2 = DAT_026f6fb0;
  if (param_2 != '\0') {
    if (DAT_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_026fcf08;
    if (DAT_026fcf08 != 0) {
      FUN_00d50b00();
    }
    FUN_01f6ca30();
    if (local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar5 = (**(code **)(*local_88 + 0x5e0))();
    if (iVar5 == 0) {
      FUN_002c9a70();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      if (lVar2 != 0) {
        local_80 = '\0';
        local_88 = (longlong *)0x0;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar10 = 0;
          do {
            local_88 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8);
            if ((*(int *)((longlong)local_88 + 0x24) == 1) && ((int)local_88[4] == 1)) {
              if (local_88[3] == 0) {
                plVar9 = (longlong *)local_88[2];
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar7 != (void *)0x0) {
                  plVar9 = (longlong *)local_88[2];
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                  }
                }
                (**(code **)(*plVar9 + 0x478))();
              }
              else {
                FUN_00b88600();
              }
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_014fff90();
              if (local_40 == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if (local_88[3] == 0) {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              else {
                FUN_00d50b00();
                FUN_00d50b20();
                if (local_88[2] != 0) {
                  FUN_00d50b00();
                  FUN_00d50b20();
                  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x628))();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_004a1110();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01313ad0();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar6 = local_88[2];
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_012cb5e0();
                  if (lVar6 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                lVar6 = local_88[3];
                if (lVar6 != 0) {
                  FUN_00d50b00();
                }
                FUN_00b881a0();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                lVar6 = local_88[3];
                if (lVar6 != 0) {
                  FUN_00d50b00();
                }
                FUN_00b88600();
                (**(code **)(*local_48 + 0x430))();
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                if (local_48 != (longlong *)0x0) {
                  cVar4 = (**(code **)(*local_48 + 0x398))();
                  if (cVar4 != '\0') {
                    (**(code **)(*local_48 + 0x430))();
                  }
                  FUN_00d50b20();
                }
              }
            }
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
        }
        FUN_002d7300();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x480))();
      FUN_00db3760();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_002c9a70();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar11 = 1;
      FUN_00d50b20();
    }
  }
  return uVar11;
}


