// Function: FUN_012996f0
// Address: 012996f0
// Size: 1802 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01299bf6) */
/* WARNING: Removing unreachable block (ram,0x01299bff) */
/* WARNING: Removing unreachable block (ram,0x01299ca5) */
/* WARNING: Removing unreachable block (ram,0x01299cb2) */
/* WARNING: Removing unreachable block (ram,0x01299d7c) */
/* WARNING: Removing unreachable block (ram,0x01299d88) */
/* WARNING: Removing unreachable block (ram,0x01299997) */
/* WARNING: Removing unreachable block (ram,0x012999a0) */
/* WARNING: Removing unreachable block (ram,0x012999ec) */
/* WARNING: Removing unreachable block (ram,0x012999f5) */
/* WARNING: Removing unreachable block (ram,0x01299d14) */
/* WARNING: Removing unreachable block (ram,0x01299d20) */
/* WARNING: Removing unreachable block (ram,0x01299dde) */
/* WARNING: Removing unreachable block (ram,0x01299dea) */
/* WARNING: Removing unreachable block (ram,0x0129982f) */
/* WARNING: Removing unreachable block (ram,0x01299850) */
/* WARNING: Removing unreachable block (ram,0x01299831) */
/* WARNING: Removing unreachable block (ram,0x01299852) */

ulonglong FUN_012996f0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  pthread_key_t pVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  undefined8 unaff_R15;
  undefined7 uVar14;
  ulonglong uVar13;
  int local_58;
  
  lVar1 = *unaff_RDI;
  uVar14 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (lVar1 == 0) {
    uVar13 = CONCAT71(uVar14,1);
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      uVar13 = CONCAT71(uVar14,1);
    }
    else {
      uVar13 = CONCAT71(uVar14,1);
      uVar11 = 0;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar11 * 8);
        pvVar5 = _pthread_getspecific(uVar11);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        lVar12 = *(longlong *)(lVar12 + 0xe0);
        if (lVar12 != 0) {
          FUN_00d50b00();
          local_58 = -1;
          while( true ) {
            lVar6 = (longlong)local_58;
            local_58 = local_58 + 1;
            if (*(int *)(lVar12 + 0xc) <= local_58) break;
            lVar9 = *(longlong *)(lVar12 + 0x10);
            lVar6 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
            pVar10 = (pthread_key_t)lVar9;
            lVar9 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            lVar9 = *(longlong *)(lVar9 + 0x50);
            if (lVar9 != 0) {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = lVar9;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              lVar7 = *(longlong *)(lVar7 + 0x40);
              pvVar5 = _pthread_getspecific(pVar10);
              if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                if (*(longlong *)(lVar7 + 0x60) != *unaff_RSI) goto LAB_01299950;
              }
              else if (*(longlong *)
                        (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                        + 0x60) != *unaff_RSI) {
LAB_01299950:
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar3 = FUN_00d23d20();
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pVar4 = FUN_00d23d20();
                goto LAB_01299a6a;
              }
              uVar2 = (uint)(byte)uVar13;
              goto LAB_01299822;
            }
            pvVar5 = _pthread_getspecific(pVar10);
            lVar7 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            iVar3 = *(int *)(lVar7 + 0x60);
            pvVar5 = _pthread_getspecific(pVar10);
            lVar7 = lVar6;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            pVar4 = *(pthread_key_t *)(lVar7 + 100);
LAB_01299a6a:
            if (iVar3 == -1) {
LAB_01299820:
              uVar2 = 0;
            }
            else {
              lVar7 = *unaff_RSI;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *unaff_RSI;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
              }
              if (*(int *)(*(longlong *)(lVar7 + 0x40) + 0xc) <= iVar3) goto LAB_01299820;
              lVar7 = *unaff_RSI;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *unaff_RSI;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
              }
              lVar7 = *(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10) + (longlong)iVar3 * 8);
              pVar10 = 0;
              uVar2 = 0;
              if ((lVar7 != 0) && (pVar4 != 0xffffffff)) {
                pvVar5 = _pthread_getspecific(0);
                if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
                  iVar3 = *(int *)(*(longlong *)(lVar7 + 0x40) + 0xc);
                }
                else {
                  iVar3 = *(int *)(*(longlong *)
                                    (*(longlong *)
                                      (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                                    + 0x40) + 0xc);
                }
                if ((int)pVar4 < iVar3) {
                  pvVar5 = _pthread_getspecific(pVar10);
                  if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    lVar7 = *(longlong *)
                             (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                  }
                  lVar8 = (longlong)(int)pVar4;
                  lVar7 = *(longlong *)
                           (*(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10) + lVar8 * 8);
                  if (lVar7 != 0) {
                    if (param_2 == '\0') {
                      if (lVar9 != 0) {
                        pvVar5 = _pthread_getspecific(pVar4);
                        pVar4 = (pthread_key_t)lVar8;
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_013ddad0();
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_011ef3f0();
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_013dd9a0();
                    }
                    else {
                      if (lVar9 != 0) {
                        pvVar5 = _pthread_getspecific(pVar4);
                        pVar4 = (pthread_key_t)lVar8;
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_00d23d90();
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                        lVar6 = *(longlong *)
                                 (lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                      }
                      if (*(longlong *)(lVar6 + 0x50) != lVar7) {
                        FUN_00d50b00();
                        lVar9 = *(longlong *)(lVar6 + 0x50);
                        *(longlong *)(lVar6 + 0x50) = lVar7;
                        if (lVar9 != 0) {
                          FUN_00d50b20();
                        }
                      }
                      pvVar5 = _pthread_getspecific(pVar4);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_00d21140();
                    }
                    uVar2 = (uint)(byte)uVar13;
                    goto LAB_01299822;
                  }
                }
                goto LAB_01299820;
              }
            }
LAB_01299822:
            uVar13 = (ulonglong)uVar2;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return uVar13 & 0xffffff01;
}


