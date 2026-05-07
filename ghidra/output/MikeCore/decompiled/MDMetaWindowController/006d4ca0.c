// Function: FUN_006d4ca0
// Address: 006d4ca0
// Size: 8208 bytes
// Class: MDMetaWindowController
// String references:
//   "Different sample count (delta %i)"
//   "* %@ skipped: mixed sources"
//   "* %@ skipped: different sample count (delta %i)"
//   "* %@ skipped: element count (%d vs %d)"


/* WARNING: Removing unreachable block (ram,0x006d6ccf) */
/* WARNING: Removing unreachable block (ram,0x006d6cdb) */
/* WARNING: Removing unreachable block (ram,0x006d6a9d) */
/* WARNING: Removing unreachable block (ram,0x006d6aa9) */
/* WARNING: Removing unreachable block (ram,0x006d6a49) */
/* WARNING: Removing unreachable block (ram,0x006d6a59) */
/* WARNING: Removing unreachable block (ram,0x006d66f4) */
/* WARNING: Removing unreachable block (ram,0x006d6700) */
/* WARNING: Removing unreachable block (ram,0x006d5f81) */
/* WARNING: Removing unreachable block (ram,0x006d5f8d) */
/* WARNING: Removing unreachable block (ram,0x006d52d6) */
/* WARNING: Removing unreachable block (ram,0x006d52e2) */
/* WARNING: Removing unreachable block (ram,0x006d57b4) */
/* WARNING: Removing unreachable block (ram,0x006d57c4) */
/* WARNING: Removing unreachable block (ram,0x006d6943) */
/* WARNING: Removing unreachable block (ram,0x006d6953) */
/* WARNING: Removing unreachable block (ram,0x006d6b32) */
/* WARNING: Removing unreachable block (ram,0x006d6b3e) */
/* WARNING: Removing unreachable block (ram,0x006d56cd) */
/* WARNING: Removing unreachable block (ram,0x006d56d9) */
/* WARNING: Removing unreachable block (ram,0x006d50ea) */
/* WARNING: Removing unreachable block (ram,0x006d50f6) */
/* WARNING: Removing unreachable block (ram,0x006d6ba8) */
/* WARNING: Removing unreachable block (ram,0x006d6bb8) */
/* WARNING: Removing unreachable block (ram,0x006d5cba) */
/* WARNING: Removing unreachable block (ram,0x006d5cc6) */
/* WARNING: Removing unreachable block (ram,0x006d59ea) */
/* WARNING: Removing unreachable block (ram,0x006d5a20) */
/* WARNING: Removing unreachable block (ram,0x006d4de2) */
/* WARNING: Removing unreachable block (ram,0x006d4e10) */
/* WARNING: Removing unreachable block (ram,0x006d4de4) */
/* WARNING: Removing unreachable block (ram,0x006d4e12) */
/* WARNING: Removing unreachable block (ram,0x006d59ec) */
/* WARNING: Removing unreachable block (ram,0x006d5a22) */

void FUN_006d4ca0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  pthread_key_t pVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  int iVar19;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  undefined7 uVar22;
  longlong *plVar20;
  longlong *plVar21;
  longlong local_280;
  char local_278;
  longlong local_130;
  char local_128;
  longlong local_110;
  longlong *local_f8;
  char local_f0;
  longlong *local_d8;
  char local_d0;
  int local_c0;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  uint local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  plVar7 = local_d8;
  if (*(longlong *)(unaff_RDI + 0x198) == 0) {
    return;
  }
  FUN_01f27fe0();
  cVar8 = (**(code **)(*local_d8 + 0x450))();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar8 == '\0') {
    bVar6 = false;
    local_b0 = (longlong *)0x0;
    cVar8 = '\0';
    plVar16 = (longlong *)0x0;
    goto LAB_006d6ae8;
  }
  FUN_006cb500();
  if (local_d0 == '\0') {
    if (local_d8 == (longlong *)0x0) goto LAB_006d57f9;
    FUN_00d50b00();
LAB_006d4d61:
    local_d0 = '\0';
    local_d8 = (longlong *)0x0;
    local_c0 = -1;
    bVar18 = true;
    local_40 = 0;
    plVar16 = (longlong *)0x0;
    bVar6 = false;
    local_b0 = (longlong *)0x0;
    local_110 = 0;
    do {
      do {
        lVar11 = (longlong)local_c0;
        local_c0 = local_c0 + 1;
        if (*(int *)((longlong)plVar7 + 0xc) <= local_c0) goto LAB_006d57ce;
        lVar15 = plVar7[2];
        local_d8 = *(longlong **)(lVar15 + 8 + lVar11 * 8);
        pvVar10 = _pthread_getspecific((pthread_key_t)lVar15);
        pVar14 = (pthread_key_t)lVar15;
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar19 = *(int *)((longlong)local_70 + 0xc);
        if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      } while (0 < iVar19);
      if (local_b0 == (longlong *)0x0) {
        pvVar10 = _pthread_getspecific(pVar14);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8b60();
        local_b0 = local_70;
        plVar9 = local_70;
        if (local_70 == (longlong *)0x0) {
          local_b0 = (longlong *)0x0;
        }
        else {
          bVar6 = true;
          if ((char)local_68 == '\0') {
            FUN_00d50b00();
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        pVar14 = (pthread_key_t)plVar9;
      }
      pvVar10 = _pthread_getspecific(pVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      plVar9 = local_70;
      if ((char)local_68 == '\0') {
        if (local_70 == (longlong *)0x0) goto LAB_006d5338;
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_006d4fcd:
        local_68 = local_68 & 0xffffff00;
        local_70 = (longlong *)0x0;
        local_60 = plVar9;
        local_58 = 0xffffffff;
        local_50 = local_50 & 0xffffffff00000000;
        local_58._4_4_ = 0;
        bVar5 = false;
        local_48 = (longlong *)0x0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar19 = -local_58._4_4_;
            }
            else {
              iVar19 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar19);
              FUN_00d23690();
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 + local_58._4_4_);
              iVar19 = 0;
            }
            local_58 = CONCAT44(iVar19,(int)local_58);
          }
          lVar11 = (longlong)(int)local_58;
          iVar19 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar19);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
          plVar9 = (longlong *)local_60[2];
          local_70 = (longlong *)plVar9[lVar11 + 1];
          pvVar10 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_a0 == '\0') {
            if (local_a8 == (longlong *)0x0) goto LAB_006d5010;
            FUN_00d50b00();
LAB_006d5100:
            lVar11 = DAT_02726d10;
            if (local_48 == (longlong *)0x0) {
              if (local_a8 == (longlong *)0x0) {
                if (bVar5) {
                  bVar4 = true;
                  unaff_R15 = local_40 & 0xffffffff;
                  local_48 = (longlong *)0x0;
                  goto LAB_006d52f1;
                }
                FUN_00d50b00();
                local_48 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                local_48 = local_a8;
              }
              unaff_R15 = local_40 & 0xffffffff;
              bVar4 = true;
              bVar5 = true;
            }
            else if (local_a8 == local_48) {
              bVar4 = true;
              unaff_R15 = local_40 & 0xffffffff;
            }
            else {
              if (DAT_02726d10 != 0) {
                FUN_00d50b00();
              }
              FUN_006db950();
              uVar22 = (undefined7)(unaff_R15 >> 8);
              if (plVar16 == local_a8) {
                plVar20 = plVar16;
                if (((char)local_40 == '\0') && (plVar16 != (longlong *)0x0)) {
                  if (local_a0 != '\0') goto LAB_006d51fc;
                  unaff_R15 = CONCAT71(uVar22,1);
                  local_40 = 0;
                  FUN_00d50b00();
                }
                else {
                  unaff_R15 = local_40 & 0xffffffff;
                }
LAB_006d5299:
                if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar20 = local_a8;
                if (local_a0 == '\0') {
                  if (local_a8 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  unaff_R15 = CONCAT71(uVar22,1);
                  if (((char)local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_006d5299;
                }
                if (((char)local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_006d51fc:
                local_a0 = '\0';
                unaff_R15 = CONCAT71(uVar22,1);
              }
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              bVar18 = false;
              bVar4 = false;
              plVar16 = plVar20;
            }
LAB_006d52f1:
            FUN_00d50b20();
            if (!bVar4) goto LAB_006d530e;
          }
          else {
            if (local_a8 != (longlong *)0x0) goto LAB_006d5100;
LAB_006d5010:
            unaff_R15 = local_40 & 0xffffffff;
          }
          local_40 = unaff_R15 & 0xffffffff;
        }
        unaff_R15 = local_40 & 0xffffffff;
        plVar9 = local_60;
LAB_006d530e:
        pVar14 = (pthread_key_t)plVar9;
        FUN_001159b0();
        FUN_00d50b20();
      }
      else {
        if (local_70 != (longlong *)0x0) goto LAB_006d4fcd;
LAB_006d5338:
        local_48 = (longlong *)0x0;
        unaff_R15 = local_40 & 0xffffffff;
        bVar5 = false;
      }
      if (bVar18) {
        cVar8 = (char)unaff_R15;
        if (local_48 == (longlong *)0x0) {
LAB_006d53f1:
          lVar11 = DAT_02726d18;
          if (DAT_02726d18 != 0) {
            FUN_00d50b00();
          }
          uVar13 = FUN_006db950();
          plVar9 = local_70;
          if (plVar16 == local_70) {
            plVar9 = plVar16;
            if ((cVar8 == '\0') && (plVar16 != (longlong *)0x0)) {
              if ((char)local_68 != '\0') goto LAB_006d556f;
              local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
              unaff_R15 = 0;
              FUN_00d50b00();
            }
            else {
              local_40 = unaff_R15 & 0xffffffff;
            }
LAB_006d5693:
            plVar16 = plVar9;
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                uVar13 = FUN_00d50b00();
              }
              local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
              if ((cVar8 != '\0') && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_006d5693;
            }
            if ((cVar8 != '\0') && (plVar16 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
LAB_006d556f:
            local_68 = local_68 & 0xffffff00;
            local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            plVar16 = plVar9;
          }
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar10 = _pthread_getspecific(pVar14);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar9 = local_70;
          if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 == (longlong *)0x0) goto LAB_006d53f1;
          pvVar10 = _pthread_getspecific(pVar14);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar9 = local_70;
          pvVar10 = _pthread_getspecific(pVar14);
          plVar20 = local_70;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), plVar9 = plVar20, lVar11 != 0))
          {
            plVar9 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          lVar11 = (**(code **)(*plVar9 + 0x378))();
          if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_110 == 0) {
LAB_006d55cd:
            local_110 = lVar11;
            local_40 = unaff_R15 & 0xffffffff;
            bVar4 = true;
            bVar18 = true;
            goto LAB_006d56e8;
          }
          plVar20 = (longlong *)(local_110 - lVar11);
          plVar9 = (longlong *)-(longlong)plVar20;
          if (0 < (longlong)plVar20) {
            plVar9 = plVar20;
          }
          lVar11 = local_110;
          if (plVar9 < (longlong *)((longlong)&MACH_HEADER.magic + 2)) goto LAB_006d55cd;
          local_68 = 1;
          local_70 = (longlong *)&DAT_024da828;
          local_60 = plVar9;
          FUN_00d8cb40(&DAT_024da828,&local_70);
          if (local_80 == '\0') {
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          uVar13 = FUN_006db950();
          if (plVar16 == local_a8) {
            plVar9 = plVar16;
            if ((cVar8 == '\0') && (plVar16 != (longlong *)0x0)) {
              if (local_a0 != '\0') goto LAB_006d566d;
              local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
              unaff_R15 = 0;
              FUN_00d50b00();
            }
            else {
              local_40 = unaff_R15 & 0xffffffff;
            }
LAB_006d575c:
            plVar16 = plVar9;
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_a0 == '\0') {
              if (local_a8 != (longlong *)0x0) {
                uVar13 = FUN_00d50b00();
              }
              local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
              plVar9 = local_a8;
              if ((cVar8 != '\0') && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_006d575c;
            }
            plVar9 = local_a8;
            if ((cVar8 != '\0') && (plVar16 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
LAB_006d566d:
            local_a0 = '\0';
            local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
            plVar16 = plVar9;
          }
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = false;
        bVar18 = false;
      }
      else {
        bVar4 = false;
        local_40 = unaff_R15 & 0xffffffff;
      }
LAB_006d56e8:
      if ((bVar5) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (bVar4);
LAB_006d57ce:
    FUN_000be170();
    FUN_00d50b20();
  }
  else {
    if (local_d8 != (longlong *)0x0) goto LAB_006d4d61;
LAB_006d57f9:
    bVar18 = true;
    local_110 = 0;
    local_b0 = (longlong *)0x0;
    bVar6 = false;
    plVar16 = (longlong *)0x0;
    local_40 = 0;
  }
  plVar7 = local_d8;
  pVar14 = (pthread_key_t)
           CONCAT71((int7)((ulonglong)local_b0 >> 8),local_b0 != (longlong *)0x0 && 0 < local_110);
  if (!bVar18 || (local_b0 == (longlong *)0x0 || 0 >= local_110)) {
    cVar8 = (char)local_40;
    goto LAB_006d6ae8;
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar9 + 0x18))();
  pvVar10 = _pthread_getspecific(pVar14);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e61a0();
  FUN_006cb500();
  if ((local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  bVar18 = false;
  FUN_006dbab0();
  if (local_d0 == '\0') {
    if (local_d8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 != (longlong *)0x0) {
    local_d0 = '\0';
    local_d8 = (longlong *)0x0;
    local_c0 = -1;
LAB_006d59e6:
    lVar11 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    if (local_c0 < *(int *)((longlong)plVar7 + 0xc)) {
      lVar15 = plVar7[2];
      local_d8 = *(longlong **)(lVar15 + 8 + lVar11 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar15);
      pVar14 = (pthread_key_t)lVar15;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      iVar19 = *(int *)((longlong)local_70 + 0xc);
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar19 < 1) {
        pvVar10 = _pthread_getspecific(pVar14);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        iVar19 = *(int *)((longlong)local_70 + 0xc);
        if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < iVar19) {
          pvVar10 = _pthread_getspecific(pVar14);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7210();
          plVar20 = local_70;
          if ((char)local_68 == '\0') {
            if (local_70 == (longlong *)0x0) goto LAB_006d59e6;
            FUN_00d50b00();
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_70 == (longlong *)0x0) goto LAB_006d59e6;
          local_68 = local_68 & 0xffffff00;
          local_70 = (longlong *)0x0;
          local_60 = plVar20;
          local_58 = 0xffffffff;
          local_50 = local_50 & 0xffffffff00000000;
          local_58._4_4_ = 0;
          plVar20 = (longlong *)0x0;
          bVar5 = false;
          local_48 = plVar16;
          while( true ) {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar19 = -local_58._4_4_;
              }
              else {
                iVar19 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar19);
                FUN_00d23690();
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 + local_58._4_4_);
                iVar19 = 0;
              }
              local_58 = CONCAT44(iVar19,(int)local_58);
            }
            lVar11 = (longlong)(int)local_58;
            iVar19 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar19);
            plVar16 = local_60;
            if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
            plVar16 = (longlong *)local_60[2];
            local_70 = (longlong *)plVar16[lVar11 + 1];
            pvVar10 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if (bVar18) {
              if (local_a8 != (longlong *)0x0) {
LAB_006d5cd0:
                if (plVar20 == (longlong *)0x0) {
                  if (local_a8 == (longlong *)0x0) {
                    if (bVar5) {
                      bVar4 = true;
                      plVar20 = (longlong *)0x0;
                    }
                    else {
                      bVar5 = true;
                      FUN_00d50b00();
                      plVar20 = (longlong *)0x0;
                      bVar4 = true;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    bVar5 = true;
                    bVar4 = true;
                    plVar20 = local_a8;
                  }
                }
                else if (local_a8 == plVar20) {
                  bVar4 = true;
                }
                else {
                  pvVar10 = _pthread_getspecific((pthread_key_t)plVar16);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e6000();
                  bVar18 = true;
                  if (local_130 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00d8cb40();
                  if (local_f0 == '\0') {
                    if (local_f8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_f0 = '\0';
                  }
                  FUN_006db950();
                  plVar21 = local_48;
                  uVar22 = (undefined7)((ulonglong)local_f8 >> 8);
                  if (local_48 == local_88) {
                    if (((char)local_40 != '\0') || (local_48 == (longlong *)0x0)) {
                      uVar17 = local_40 & 0xffffffff;
                      goto joined_r0x006d5ebf;
                    }
                    if (local_80 == '\0') {
                      local_40 = 0;
                      FUN_00d50b00();
                      goto LAB_006d5eee;
                    }
LAB_006d5e6b:
                    local_80 = '\0';
                    uVar17 = CONCAT71(uVar22,1);
                  }
                  else {
                    plVar21 = local_88;
                    if (local_80 != '\0') {
                      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        local_48 = local_88;
                        FUN_00d50b20();
                      }
                      goto LAB_006d5e6b;
                    }
                    if (local_88 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      local_48 = local_88;
                      FUN_00d50b20();
                    }
LAB_006d5eee:
                    uVar17 = CONCAT71(uVar22,1);
joined_r0x006d5ebf:
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (local_f8 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_a8 = &DAT_024c5048;
                  if (local_130 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_128 != '\0') && (local_130 != 0)) {
                    FUN_00d50b20();
                  }
                  if (bVar5) {
                    local_40 = uVar17 & 0xffffffff;
                    local_48 = plVar21;
                    FUN_00d50b20();
                  }
                  bVar5 = false;
                  local_40 = uVar17 & 0xffffffff;
                  bVar4 = false;
                  plVar20 = (longlong *)0x0;
                  local_48 = plVar21;
                }
                FUN_00d50b20();
                if (!bVar4) break;
              }
            }
            else if (local_a8 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_006d5cd0;
            }
          }
          pVar14 = (pthread_key_t)plVar16;
          FUN_001159b0();
          FUN_00d50b20();
          plVar16 = local_48;
          if (plVar20 != (longlong *)0x0) {
            pvVar10 = _pthread_getspecific(pVar14);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01320d00();
            plVar20 = local_70;
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar20 != (longlong *)0x0) {
              pvVar10 = _pthread_getspecific(pVar14);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              plVar16 = local_70;
              pvVar10 = _pthread_getspecific(pVar14);
              plVar20 = local_70;
              if ((pvVar10 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), plVar16 = plVar20, lVar11 != 0)) {
                plVar16 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
              }
              lVar11 = (**(code **)(*plVar16 + 0x378))();
              uVar12 = lVar11 - local_110;
              uVar17 = -uVar12;
              if (0 < (longlong)uVar12) {
                uVar17 = uVar12;
              }
              if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar17 < 2) {
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7210();
                iVar19 = *(int *)((longlong)local_70 + 0xc);
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01327a50();
                iVar1 = *(int *)((longlong)local_a8 + 0xc);
                if ((bVar18) && (local_a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar16 = local_48;
                if (iVar19 == iVar1) {
                  pvVar10 = _pthread_getspecific(pVar14);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e6000();
                  plVar20 = local_70;
                  lVar11 = DAT_02726d20;
                  if ((char)local_68 == '\0') {
                    if (local_70 != (longlong *)0x0) {
                      FUN_00d50b00();
                      lVar11 = DAT_02726d20;
                    }
                  }
                  else {
                    local_68 = local_68 & 0xffffff00;
                  }
                  DAT_02726d20 = lVar11;
                  if (lVar11 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_01d5d9b0();
                  if (lVar11 != 0) {
                    FUN_00d50b20();
                  }
                  if (plVar20 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01d5e230();
                  FUN_01d66da0();
                  plVar20 = DAT_02726d28;
                  if (DAT_02726d28 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_70 = plVar20;
                  local_68 = local_68 & 0xffffff00;
                  FUN_00ca0840();
                  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar20 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((bVar18) && (local_a8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01d5e230();
                  if (unaff_RDI != 0) {
                    FUN_00d50b00();
                  }
                  FUN_01d651e0();
                  if (unaff_RDI != 0) {
                    FUN_00d50b20();
                  }
                  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_006d59c4;
                }
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6000();
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7210();
                uVar2 = *(undefined4 *)(local_130 + 0xc);
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01327a50();
                uVar3 = *(undefined4 *)(local_280 + 0xc);
                local_68 = 3;
                local_70 = &DAT_024c5048;
                local_58 = local_58 & 0xffffffffffffff00;
                if (local_f8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_60 = local_f8;
                local_58 = CONCAT71(local_58._1_7_,1);
                local_70 = (longlong *)&DAT_02509758;
                local_50 = CONCAT44(uVar3,uVar2);
                FUN_00d8cb40();
                plVar16 = local_48;
                if (local_80 == '\0') {
                  if (local_88 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_80 = '\0';
                }
                uVar13 = FUN_006db950();
                uVar22 = (undefined7)((ulonglong)plVar16 >> 8);
                if (plVar16 == local_a8) {
                  if (((char)local_40 == '\0') && (plVar16 != (longlong *)0x0)) {
                    plVar20 = plVar16;
                    if (bVar18) goto LAB_006d6839;
                    uVar17 = CONCAT71(uVar22,1);
                    local_40 = 0;
                    FUN_00d50b00();
                  }
                  else {
                    uVar17 = local_40 & 0xffffffff;
                  }
LAB_006d6971:
                  if ((bVar18) && (local_a8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_40 = uVar17 & 0xffffffff;
                  }
                  else {
                    local_40 = uVar17 & 0xffffffff;
                  }
                }
                else {
                  if (!bVar18) {
                    if (local_a8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar17 = CONCAT71(uVar22,1);
                    plVar16 = local_a8;
                    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      local_48 = local_a8;
                      FUN_00d50b20();
                    }
                    goto LAB_006d6971;
                  }
                  plVar20 = local_a8;
                  if (((char)local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
                    local_48 = local_a8;
                    uVar13 = FUN_00d50b20();
                  }
LAB_006d6839:
                  bVar18 = false;
                  local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  plVar16 = plVar20;
                }
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_70 = &DAT_024c5048;
                if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_278 != '\0') && (local_280 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar10 = _pthread_getspecific(pVar14);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6000();
                local_68 = 2;
                local_70 = &DAT_024c5048;
                local_58 = local_58 & 0xffffffffffffff00;
                if (local_f8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_60 = local_f8;
                local_58 = CONCAT71(local_58._1_7_,1);
                local_70 = (longlong *)&DAT_02509720;
                local_50 = uVar17;
                FUN_00d8cb40();
                plVar16 = local_48;
                if (local_80 == '\0') {
                  if (local_88 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_80 = '\0';
                }
                uVar13 = FUN_006db950();
                uVar22 = (undefined7)((ulonglong)plVar16 >> 8);
                if (plVar16 == local_a8) {
                  if (((char)local_40 == '\0') && (plVar16 != (longlong *)0x0)) {
                    plVar20 = plVar16;
                    if (bVar18) goto LAB_006d64ce;
                    uVar17 = CONCAT71(uVar22,1);
                    local_40 = 0;
                    FUN_00d50b00();
                  }
                  else {
                    uVar17 = local_40 & 0xffffffff;
                  }
LAB_006d689f:
                  if ((bVar18) && (local_a8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    local_40 = uVar17 & 0xffffffff;
                  }
                  else {
                    local_40 = uVar17 & 0xffffffff;
                  }
                }
                else {
                  if (!bVar18) {
                    if (local_a8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar17 = CONCAT71(uVar22,1);
                    plVar16 = local_a8;
                    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      local_48 = local_a8;
                      FUN_00d50b20();
                    }
                    goto LAB_006d689f;
                  }
                  plVar20 = local_a8;
                  if (((char)local_40 != '\0') && (plVar16 != (longlong *)0x0)) {
                    local_48 = local_a8;
                    uVar13 = FUN_00d50b20();
                  }
LAB_006d64ce:
                  bVar18 = false;
                  local_40 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  plVar16 = plVar20;
                }
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_70 = &DAT_024c5048;
                if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
LAB_006d59c4:
            if (bVar5) {
              FUN_00d50b20();
            }
          }
        }
      }
      goto LAB_006d59e6;
    }
    FUN_000be170();
  }
  FUN_01d778e0();
  iVar19 = FUN_01d5b230();
  lVar11 = DAT_02726d30;
  if (iVar19 < 1) {
    local_48 = plVar16;
    if (DAT_02726d30 != 0) {
      FUN_00d50b00();
    }
    plVar20 = local_48;
    FUN_006db950();
    plVar16 = local_48;
    if (plVar20 == local_d8) {
      cVar8 = (char)local_40;
      if (((char)local_40 == '\0') && (local_48 != (longlong *)0x0)) {
        if (local_d0 != '\0') goto LAB_006d6c5b;
        FUN_00d50b00();
        cVar8 = '\x01';
      }
LAB_006d6cac:
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar16 = local_d8;
      if (local_d0 == '\0') {
        if (local_d8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar8 = '\x01';
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          local_48 = local_d8;
          FUN_00d50b20();
        }
        goto LAB_006d6cac;
      }
      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        local_48 = local_d8;
        FUN_00d50b20();
      }
LAB_006d6c5b:
      cVar8 = '\x01';
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar8 = (char)local_40;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_006d6ae8:
  (**(code **)(**(longlong **)(unaff_RDI + 0x198) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x198) + 0x6a8))();
  if ((cVar8 != '\0') && (plVar16 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


