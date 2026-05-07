// Function: FUN_01a5e160
// Address: 01a5e160
// Size: 2679 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a5ebd2) */
/* WARNING: Removing unreachable block (ram,0x01a5e2d1) */
/* WARNING: Removing unreachable block (ram,0x01a5e346) */
/* WARNING: Removing unreachable block (ram,0x01a5e352) */
/* WARNING: Removing unreachable block (ram,0x01a5e7af) */
/* WARNING: Removing unreachable block (ram,0x01a5e7bf) */

ulonglong FUN_01a5e160(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar17;
  longlong lVar16;
  bool bVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar20;
  undefined4 uVar21;
  double dVar22;
  float fStack_114;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_38;
  
  if (*param_2 == 0) {
    uVar15 = 0;
    goto LAB_01a5e36a;
  }
  uVar19 = FUN_01a58dc0();
  local_80 = local_68;
  if (local_68 == (longlong *)0x0) {
    bVar2 = true;
    bVar18 = false;
    local_80 = (longlong *)0x0;
LAB_01a5e2e9:
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar7 = FUN_01a58d30(uVar19,&local_b8);
    uVar15 = (ulonglong)uVar7;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar18) goto LAB_01a5e36a;
  }
  else {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_80))();
    if (cVar5 != '\0') {
      iVar6 = FUN_01d3a5a0();
      bVar18 = true;
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        if (iVar6 == 1) {
          (**(code **)("/usr/lib/libobjc.A.dylib" + *local_80 + 0x18))();
          plVar9 = local_80;
          FUN_01d3abf0();
          local_a8 = FUN_01e466c0();
          (**(code **)(*plVar9 + 0xe30))();
          local_70 = local_68;
          if (local_68 == (longlong *)0x0) {
            local_74 = 1;
            local_88 = 0;
          }
          else {
            plVar9 = local_68;
            if (local_60 == '\0') {
              uVar8 = FUN_00d50b00();
              if ((local_60 == '\0') || (local_68 == (longlong *)0x0)) {
                local_74 = 0;
                local_88 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                goto LAB_01a5e394;
              }
              plVar9 = (longlong *)FUN_00d50b20();
            }
            local_88 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
            local_74 = 0;
          }
LAB_01a5e394:
          iVar6 = FUN_01d3b620();
          if (iVar6 == 2) {
            if (*(longlong *)(unaff_RDI + 0x38) == 0) {
              uVar8 = 0;
              plVar14 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              FUN_00d50b20();
              lVar16 = *(longlong *)(unaff_RDI + 0x38);
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              FUN_00d74120();
              plVar14 = local_68;
              if (local_68 == (longlong *)0x0) {
                plVar14 = (longlong *)0x0;
                uVar8 = 0;
              }
              else {
                uVar17 = (undefined7)((ulonglong)unaff_RDI >> 8);
                if (local_60 == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar17,1);
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                  uVar8 = CONCAT71(uVar17,1);
                }
              }
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_70 == (longlong *)0x0) {
              local_38._0_1_ = '\0';
              plVar9 = (longlong *)0x0;
            }
            else {
              local_60 = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_70;
              local_48 = 0;
              local_50 = 0;
              local_a8 = uVar8;
              if (*(int *)((longlong)local_70 + 0xc) < 1) {
                local_38 = 0;
                plVar9 = (longlong *)0x0;
              }
              else {
                lVar16 = 0;
                local_38 = 0;
                plVar13 = (longlong *)0x0;
                do {
                  pVar12 = (pthread_key_t)local_38;
                  local_38 = local_38 & 0xffffffff;
                  local_68 = *(longlong **)(local_70[2] + lVar16 * 8);
                  pvVar11 = _pthread_getspecific(pVar12);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_012708c0();
                  plVar9 = local_98;
                  uVar17 = (undefined7)((ulonglong)uVar8 >> 8);
                  cVar5 = (char)local_38;
                  if (local_98 == plVar13) {
                    plVar9 = plVar13;
                    if ((cVar5 == '\0') && (local_98 != (longlong *)0x0)) {
                      local_38 = CONCAT71(uVar17,1);
                      if (local_90 != '\0') goto LAB_01a5e987;
                      local_38 = CONCAT71(uVar17,1);
                      FUN_00d50b00();
                    }
joined_r0x01a5e960:
                    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_90 == '\0') {
                      if (local_98 != (longlong *)0x0) {
                        uVar8 = FUN_00d50b00();
                      }
                      local_38 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                      if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto joined_r0x01a5e960;
                    }
                    local_38 = CONCAT71(uVar17,1);
                    if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01a5e987:
                  lVar4 = DAT_027bf050;
                  if ((plVar9 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
                    plVar13 = plVar9;
                    if (DAT_027bf050 != 0) {
                      FUN_00d50b00();
                    }
                    pVar12 = (pthread_key_t)plVar13;
                    cVar5 = (**(code **)(*plVar14 + 0x50))();
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                    lVar4 = DAT_027e1e80;
                    if (cVar5 == '\0') {
                      if (DAT_027e1e80 != 0) {
                        FUN_00d50b00();
                      }
                      cVar5 = (**(code **)(*plVar14 + 0x50))();
                      if (lVar4 != 0) {
                        FUN_00d50b20();
                      }
                      lVar4 = DAT_027bf048;
                      if (cVar5 == '\0') {
                        if (DAT_027bf048 != 0) {
                          FUN_00d50b00();
                        }
                        cVar5 = (**(code **)(*plVar14 + 0x50))();
                        if (lVar4 != 0) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          pvVar11 = _pthread_getspecific(pVar12);
                          if (pvVar11 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_012dfbc0();
                        }
                      }
                      else {
                        pvVar11 = _pthread_getspecific(pVar12);
                        if (pvVar11 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012df8d0();
                      }
                    }
                    else {
                      pvVar11 = _pthread_getspecific(pVar12);
                      if (pvVar11 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012dfc10();
                    }
                  }
                  lVar16 = lVar16 + 1;
                  local_50 = CONCAT44(local_50._4_4_,(int)lVar16);
                  plVar13 = plVar9;
                } while ((int)lVar16 < *(int *)((longlong)local_70 + 0xc));
              }
              FUN_001159b0();
              uVar8 = local_a8;
            }
            if (((char)uVar8 != '\0') && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar9 = (longlong *)0x0;
            local_38._0_1_ = '\0';
            uVar8 = local_a8;
LAB_01a5e430:
            uVar3 = uVar8;
            (**(code **)(*local_80 + 0x658))();
            plVar14 = local_68;
            plVar13 = (longlong *)*unaff_RSI;
            if (plVar13 != local_68) {
              lVar16 = unaff_RSI[1];
              if (local_60 != '\0') {
                *unaff_RSI = (longlong)local_68;
                if (((char)lVar16 != '\0') && (plVar13 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a5e481;
              }
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RSI = (longlong)plVar14;
              if (((char)lVar16 != '\0') && (plVar13 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a5e4c3:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              if (*unaff_RSI == 0) goto LAB_01a5e76d;
LAB_01a5e4d4:
              uVar7 = FUN_01d3a5a0();
              plVar14 = (longlong *)(ulonglong)uVar7;
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 6) goto LAB_01a5e781;
              iVar6 = FUN_01d3a5a0();
              uVar8 = uVar3;
              if (iVar6 == 5) {
                FUN_01d3abf0();
                local_a8 = FUN_01e466c0();
                uVar8 = local_a8;
                if (local_70 != (longlong *)0x0) {
                  local_60 = '\0';
                  local_68 = (longlong *)0x0;
                  local_58 = local_70;
                  local_50 = 0xffffffff;
                  local_48 = 0;
                  fStack_114 = (float)((ulonglong)uVar3 >> 0x20);
                  fVar20 = (fStack_114 - (float)((ulonglong)local_a8 >> 0x20)) / DAT_023908e0;
                  local_50._4_4_ = 0;
                  while( true ) {
                    if (local_50._4_4_ != 0) {
                      if (local_50._4_4_ < 1) {
                        iVar6 = -local_50._4_4_;
                      }
                      else {
                        iVar6 = (int)local_50 - local_50._4_4_;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        FUN_00d23690();
                        local_48 = local_48 + local_50._4_4_;
                        iVar6 = 0;
                      }
                      local_50 = CONCAT44(iVar6,(int)local_50);
                    }
                    lVar16 = (longlong)(int)local_50;
                    iVar6 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,iVar6);
                    if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
                    local_68 = *(longlong **)(local_58[2] + 8 + lVar16 * 8);
                    pvVar11 = _pthread_getspecific((pthread_key_t)local_58[2]);
                    if (pvVar11 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012708c0();
                    plVar13 = local_98;
                    if (local_98 == plVar9) {
                      plVar13 = plVar9;
                      cVar5 = (char)local_38;
                      if (((char)local_38 == '\0') && (local_98 != (longlong *)0x0)) {
                        local_38._0_1_ = '\x01';
                        if (local_90 != '\0') goto LAB_01a5e6f6;
                        FUN_00d50b00();
                        cVar5 = '\x01';
                      }
LAB_01a5e6d4:
                      local_38._0_1_ = cVar5;
                      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_90 == '\0') {
                        if (local_98 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        cVar5 = '\x01';
                        if (((char)local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01a5e6d4;
                      }
                      cVar5 = '\x01';
                      bVar18 = (char)local_38 != '\0';
                      local_38._0_1_ = cVar5;
                      if ((bVar18) && (plVar9 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_01a5e6f6:
                    if (plVar13 != (longlong *)0x0) {
                      if (*(longlong *)(unaff_RDI + 0x38) == 0) {
                        uVar19 = 0;
                        uVar21 = 0;
                      }
                      else {
                        pvVar11 = _pthread_getspecific((pthread_key_t)plVar13);
                        plVar9 = plVar13;
                        if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                          plVar9 = (longlong *)
                                   plVar13[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                        }
                        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x218))();
                        uVar19 = (undefined4)*puVar10;
                        uVar21 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                      }
                      dVar1 = (double)CONCAT44(uVar21,uVar19) + (double)fVar20;
                      dVar22 = DAT_0238fee8;
                      if (dVar1 <= DAT_0238fee8) {
                        dVar22 = dVar1;
                      }
                      uVar19 = 0;
                      if (0.0 <= dVar22) {
                        uVar19 = SUB84(dVar22,0);
                      }
                      FUN_01a5e030(uVar19);
                    }
                    plVar9 = plVar13;
                  }
                  FUN_001159b0();
                  uVar8 = local_a8;
                }
              }
              goto LAB_01a5e430;
            }
            if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
              if (local_60 == '\0') {
                FUN_00d50b00();
                goto LAB_01a5e4c3;
              }
LAB_01a5e481:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              local_60 = '\0';
            }
            if (*unaff_RSI != 0) goto LAB_01a5e4d4;
LAB_01a5e76d:
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a5e781:
            FUN_0199eb40();
          }
          if (((char)local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_74 == '\0' && local_70 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar2 = false;
          uVar15 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
          goto LAB_01a5e35c;
        }
        bVar2 = false;
        bVar18 = true;
        uVar19 = extraout_XMM0_Da_00;
      }
      else {
        bVar2 = false;
        uVar19 = extraout_XMM0_Da;
      }
      goto LAB_01a5e2e9;
    }
    bVar2 = false;
    uVar15 = 0;
  }
LAB_01a5e35c:
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_01a5e36a:
  return uVar15 & 0xffffffff;
}


