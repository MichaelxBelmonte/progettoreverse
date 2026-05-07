// Function: FUN_0138b6e0
// Address: 0138b6e0
// Size: 3407 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x0138b9d5) */
/* WARNING: Removing unreachable block (ram,0x0138b9e1) */
/* WARNING: Removing unreachable block (ram,0x0138c261) */
/* WARNING: Removing unreachable block (ram,0x0138c26a) */
/* WARNING: Removing unreachable block (ram,0x0138bd30) */
/* WARNING: Removing unreachable block (ram,0x0138bd39) */
/* WARNING: Removing unreachable block (ram,0x0138bc2b) */
/* WARNING: Removing unreachable block (ram,0x0138bc34) */
/* WARNING: Removing unreachable block (ram,0x0138ba1c) */
/* WARNING: Removing unreachable block (ram,0x0138ba25) */
/* WARNING: Removing unreachable block (ram,0x0138c289) */
/* WARNING: Removing unreachable block (ram,0x0138c292) */
/* WARNING: Removing unreachable block (ram,0x0138ba6d) */
/* WARNING: Removing unreachable block (ram,0x0138ba76) */
/* WARNING: Removing unreachable block (ram,0x0138bb23) */
/* WARNING: Removing unreachable block (ram,0x0138b7db) */
/* WARNING: Removing unreachable block (ram,0x0138b810) */
/* WARNING: Removing unreachable block (ram,0x0138b7dd) */
/* WARNING: Removing unreachable block (ram,0x0138b812) */
/* WARNING: Removing unreachable block (ram,0x0138c2bc) */
/* WARNING: Removing unreachable block (ram,0x0138c2c5) */
/* WARNING: Removing unreachable block (ram,0x0138c35b) */
/* WARNING: Removing unreachable block (ram,0x0138c368) */
/* WARNING: Removing unreachable block (ram,0x0138c2f9) */
/* WARNING: Removing unreachable block (ram,0x0138c305) */
/* WARNING: Removing unreachable block (ram,0x0138bb77) */
/* WARNING: Removing unreachable block (ram,0x0138bba0) */
/* WARNING: Removing unreachable block (ram,0x0138bb79) */
/* WARNING: Removing unreachable block (ram,0x0138bba2) */
/* WARNING: Removing unreachable block (ram,0x0138bca7) */
/* WARNING: Removing unreachable block (ram,0x0138bcb0) */

void FUN_0138b6e0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  int extraout_var;
  ulonglong uVar9;
  longlong lVar10;
  int extraout_var_00;
  undefined8 *puVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  int local_60;
  longlong local_48;
  char local_40;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar12 = 0x2572358;
  *puVar6 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  lVar14 = *unaff_RSI;
  if (lVar14 != 0) {
    local_d8 = -1;
    while( true ) {
      lVar7 = (longlong)local_d8;
      local_d8 = local_d8 + 1;
      if (*(int *)(lVar14 + 0xc) <= local_d8) break;
      lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 8 + lVar7 * 8);
      lVar10 = *(longlong *)(lVar7 + 0x10);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      lVar1 = *(longlong *)(lVar7 + 0x18);
      lVar13 = lVar7;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pVar12 = (pthread_key_t)lVar13;
      cVar3 = FUN_013710d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de790();
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de790();
        FUN_00e7b4e0();
        puVar11 = puVar5;
        FUN_015b4ee0();
        pVar12 = (pthread_key_t)puVar11;
        lVar10 = *(longlong *)(lVar7 + 0x10);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(longlong *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          local_60 = -1;
          while (local_60 = local_60 + 1, local_60 < *(int *)(lVar7 + 0xc)) {
            pVar12 = (pthread_key_t)*(undefined8 *)(lVar7 + 0x10);
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_40 == '\0') && (local_48 != 0)) {
              FUN_00d50b00();
            }
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
                goto LAB_0138bcc0;
              }
            }
            else if (local_48 != 0) {
LAB_0138bcc0:
              pvVar8 = _pthread_getspecific(pVar12);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012641c0();
              if ((local_40 == '\0') && (local_48 != 0)) {
                FUN_00d50b00();
              }
              pvVar8 = _pthread_getspecific(pVar12);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0128c200();
              if (local_48 == 0) {
                cVar3 = '\0';
              }
              else {
                pvVar8 = _pthread_getspecific(pVar12);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0128c200();
                if (local_c0 == 0) {
                  cVar3 = '\0';
                }
                else {
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0128c200();
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01507970();
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0128c200();
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar9 = FUN_01507970();
                  cVar3 = '\0';
                  if ((extraout_var != 0) && (uVar9 >> 0x20 != 0)) {
                    cVar3 = FUN_00e7c000();
                  }
                  if ((local_90 != '\0') && (local_98 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (cVar3 == '\0') {
                if (local_48 != 0) {
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0128c200();
                  if (local_48 == 0) {
                    cVar3 = '\0';
                  }
                  else {
                    pvVar8 = _pthread_getspecific(pVar12);
                    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                      pVar12 = (pthread_key_t)local_48;
                    }
                    FUN_0128c200();
                    if (local_c0 == 0) {
                      cVar3 = '\0';
                    }
                    else {
                      pvVar8 = _pthread_getspecific(pVar12);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0128c200();
                      pvVar8 = _pthread_getspecific(pVar12);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01507970();
                      pvVar8 = _pthread_getspecific(pVar12);
                      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                        pVar12 = (pthread_key_t)local_48;
                      }
                      FUN_0128c200();
                      pvVar8 = _pthread_getspecific(pVar12);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar9 = FUN_01507970();
                      cVar3 = '\0';
                      if ((extraout_var_00 != 0) && (uVar9 >> 0x20 != 0)) {
                        cVar3 = FUN_00e7c000();
                      }
                      if ((local_90 != '\0') && (local_98 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_a0 != '\0') && (local_a8 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if ((local_b8 != '\0') && (local_c0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar3 != '\0') goto LAB_0138c222;
                  goto LAB_0138c319;
                }
              }
              else {
LAB_0138c222:
                puVar11 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &DAT_02572358;
                (*pcVar2)();
                FUN_00d21140();
                FUN_00d21140();
                if (local_48 != 0) {
                  FUN_00d21140();
                }
                local_40 = '\0';
                FUN_00e7bdb0();
                FUN_01287c80();
                FUN_00d50b20();
                if (local_48 != 0) {
LAB_0138c319:
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
      }
    }
    FUN_01954b60();
    pVar12 = (pthread_key_t)lVar14;
  }
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar8 = _pthread_getspecific(pVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0141bab0();
    if (iVar4 != 3) goto LAB_0138c39a;
  }
  else {
LAB_0138c39a:
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') goto LAB_0138c3d8;
  }
  if (0xe < *(int *)(puVar5 + 3) + 7U) {
    FUN_01353f80();
  }
LAB_0138c3d8:
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


