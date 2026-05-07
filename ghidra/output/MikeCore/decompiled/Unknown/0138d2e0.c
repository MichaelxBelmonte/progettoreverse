// Function: FUN_0138d2e0
// Address: 0138d2e0
// Size: 1895 bytes
// Class: Unknown


ulonglong FUN_0138d2e0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 uVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_31;
  
  plVar7 = (longlong *)*unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    plVar7 = (longlong *)*unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  uVar13 = (**(code **)(*plVar7 + 0x3e0))();
  local_68 = CONCAT44(local_68._4_4_,uVar13);
  local_d8 = *unaff_RSI;
  local_d0 = 0;
  FUN_0138dd50(uVar13,&local_d8);
  local_60 = local_50;
  if (local_50 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = *unaff_RSI;
    local_b0 = '\0';
    cVar1 = FUN_014ea210((undefined4)local_68,DAT_02390124,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      uVar9 = 0;
    }
    else {
      lVar3 = *(longlong *)(unaff_RDI + 0x40);
      if (*(int *)(lVar3 + 0xc) < 1) {
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      }
      else {
        lVar5 = 0;
        local_40 = (longlong *)0x0;
        local_70 = 0;
        plVar10 = (longlong *)0x0;
        local_58 = 0;
        plVar7 = (longlong *)0x0;
        local_68 = 0;
        plVar11 = (longlong *)0x0;
        do {
          lVar3 = *(longlong *)(lVar3 + 0x10);
          plVar8 = *(longlong **)(lVar3 + lVar5 * 8);
          local_78 = plVar10;
          if (local_40 == plVar8) {
            if (((char)local_70 == '\0') && (local_40 != (longlong *)0x0)) {
              local_70 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (plVar8 != (longlong *)0x0) {
              lVar3 = FUN_00d50b00();
            }
            if (((char)local_70 == '\0') || (local_40 == (longlong *)0x0)) {
              local_70 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
              local_40 = plVar8;
            }
            else {
              local_40 = plVar8;
              uVar4 = FUN_00d50b20();
              local_70 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            }
          }
          plVar12 = local_78;
          pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
            plVar7 = local_40;
          }
          FUN_013dfcb0();
          if (local_50 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              plVar7 = local_40;
            }
            FUN_013de560();
            plVar8 = (longlong *)CONCAT71((int7)((ulonglong)plVar8 >> 8),local_98 == local_60);
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar10 = plVar12;
          if ((char)plVar8 != '\0') {
            pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              plVar7 = local_40;
            }
            FUN_013dfcb0();
            plVar8 = local_98;
            pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
            plVar10 = local_98;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar8 = plVar10, lVar3 != 0)) {
              plVar8 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            lVar3 = FUN_013dd790();
            plVar10 = local_50;
            local_c8 = lVar5;
            if (local_50 == plVar12) {
              lVar5 = local_58;
              plVar10 = plVar12;
              local_31 = (char)local_58;
              if (((char)local_58 == '\0') && (local_50 != (longlong *)0x0)) {
                if (local_48 != '\0') goto LAB_0138d6b8;
                local_31 = '\x01';
                lVar5 = FUN_00d50b00();
              }
LAB_0138d700:
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                lVar5 = FUN_00d50b20();
              }
            }
            else {
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  lVar3 = FUN_00d50b00();
                }
                local_31 = '\x01';
                lVar5 = lVar3;
                if (((char)local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
                  lVar5 = FUN_00d50b20();
                }
                goto LAB_0138d700;
              }
              if (((char)local_58 != '\0') && (plVar12 != (longlong *)0x0)) {
                lVar3 = FUN_00d50b20();
              }
LAB_0138d6b8:
              local_48 = '\0';
              local_31 = '\x01';
              lVar5 = lVar3;
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              lVar5 = FUN_00d50b20();
            }
            if (0 < *(int *)((longlong)plVar10 + 0xc)) {
              lVar3 = 0;
              plVar12 = plVar11;
              do {
                uVar9 = local_68 & 0xffffffff;
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_011ef8d0();
                plVar11 = local_50;
                uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
                cVar1 = (char)uVar9;
                if (local_50 == plVar12) {
                  plVar11 = plVar12;
                  local_68 = uVar9;
                  if ((cVar1 == '\0') && (local_50 != (longlong *)0x0)) {
                    local_68 = CONCAT71(uVar6,1);
                    if (local_48 != '\0') goto LAB_0138d86e;
                    local_68 = CONCAT71(uVar6,1);
                    FUN_00d50b00();
                  }
joined_r0x0138d840:
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_48 == '\0') {
                    if (local_50 != (longlong *)0x0) {
                      uVar4 = FUN_00d50b00();
                    }
                    local_68 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
                    if ((cVar1 != '\0') && (plVar12 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto joined_r0x0138d840;
                  }
                  local_68 = CONCAT71(uVar6,1);
                  if ((cVar1 != '\0') && (plVar12 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
LAB_0138d86e:
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                plVar8 = local_60;
                if ((pvVar2 != (void *)0x0) &&
                   (lVar5 = FUN_00e8b990(), plVar8 = local_60, lVar5 != 0)) {
                  plVar7 = local_60;
                  plVar8 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar8 + 0x3e0))();
                FUN_012595a0();
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                local_a0 = '\0';
                local_a8 = plVar11;
                FUN_0039e8b0();
                plVar8 = local_50;
                local_80 = 0;
                if (local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_48 = '\0';
                }
                local_80 = '\x01';
                local_88 = plVar8;
                FUN_012879b0();
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar3 = lVar3 + 1;
                lVar5 = (longlong)*(int *)((longlong)plVar10 + 0xc);
                plVar12 = plVar11;
              } while (lVar3 < lVar5);
            }
            local_58 = CONCAT71((int7)((ulonglong)lVar5 >> 8),local_31);
            lVar5 = local_c8;
          }
          lVar5 = lVar5 + 1;
          lVar3 = *(longlong *)(unaff_RDI + 0x40);
          plVar7 = (longlong *)(longlong)*(int *)(lVar3 + 0xc);
        } while (lVar5 < (longlong)plVar7);
        if (((char)local_68 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
        if (((char)local_58 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_70 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}


