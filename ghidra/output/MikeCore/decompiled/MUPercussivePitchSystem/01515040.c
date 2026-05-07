// Function: FUN_01515040
// Address: 01515040
// Size: 4434 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01515eea) */
/* WARNING: Removing unreachable block (ram,0x01515ef3) */
/* WARNING: Removing unreachable block (ram,0x015159c6) */
/* WARNING: Removing unreachable block (ram,0x015159cf) */
/* WARNING: Removing unreachable block (ram,0x01515ff8) */
/* WARNING: Removing unreachable block (ram,0x01516001) */
/* WARNING: Removing unreachable block (ram,0x01515473) */
/* WARNING: Removing unreachable block (ram,0x0151547c) */
/* WARNING: Removing unreachable block (ram,0x015156aa) */
/* WARNING: Removing unreachable block (ram,0x015156b3) */
/* WARNING: Removing unreachable block (ram,0x01515868) */
/* WARNING: Removing unreachable block (ram,0x01515871) */

ulonglong FUN_01515040(undefined8 param_1,undefined8 *param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  pthread_key_t pVar13;
  longlong *in_RCX;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar17;
  undefined7 uVar18;
  ulonglong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 *local_res8;
  undefined1 local_res10;
  char local_res18;
  char local_res20;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  undefined4 local_d4;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong *local_50;
  char local_38;
  
  lVar10 = *unaff_RSI;
  local_120 = in_RCX;
  local_a8 = param_4;
  local_78 = param_1;
  local_60 = param_2;
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar6 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar10 + 0x80) == 0) {
    do {
      lVar7 = *(longlong *)(lVar10 + 0x50);
      if (lVar7 == 0) {
        lVar10 = 0;
        goto LAB_01515137;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar6 != (void *)0x0) {
        lVar7 = *(longlong *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      lVar10 = lVar7;
    } while (*(longlong *)(lVar7 + 0x80) == 0);
    lVar10 = *(longlong *)(lVar7 + 0x80);
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x80);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
LAB_01515137:
  local_68 = lVar10;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0124b580();
  (**(code **)(*plVar8 + 0x18))();
  if (lVar10 == 0) {
    uVar19 = 0;
  }
  else {
    local_90 = '\0';
    local_98 = 0;
    local_d4 = 0xffffffff;
    local_108 = (longlong *)(unaff_RDI + 0x78);
    bVar1 = true;
    local_118 = param_3 >> 0x20;
    local_110 = (ulonglong)local_a8 >> 0x20;
    puVar15 = local_60;
    local_128 = param_3;
    while( true ) {
      pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      in_RCX = local_a8;
      cVar2 = FUN_01252960(local_a8,param_3,&local_98,&local_88);
      if (cVar2 == '\0') break;
      if (local_98 != 0) {
        uVar11 = extraout_XMM0_Qa;
        if (((ulonglong)local_88 >> 0x20 == 0) && (local_118 != 0)) {
          local_218 = *puVar15;
          local_210 = 0;
          local_88 = (longlong *)FUN_01514010(0,&local_218);
          uVar11 = extraout_XMM0_Qa_00;
        }
        if ((local_b0._4_4_ == 0) && (local_110 != 0)) {
          local_208 = *puVar15;
          local_200 = 0;
          local_b0 = (longlong *)FUN_01514010(uVar11,&local_208);
        }
        plVar17 = local_120;
        local_1f8 = *puVar15;
        local_1f0 = 0;
        local_1e8 = *local_120;
        local_1e0 = 0;
        local_1d8 = *local_res8;
        local_1d0 = 0;
        local_88 = (longlong *)FUN_01514120(local_78,&local_1f8,&local_1d8,local_res10);
        local_1c8 = *puVar15;
        local_1c0 = 0;
        local_1b8 = *plVar17;
        local_1b0 = 0;
        local_1a8 = *local_res8;
        local_1a0 = 0;
        local_b8 = (longlong *)FUN_01514120(local_78,&local_1c8,&local_1a8,local_res10);
        plVar17 = local_88;
        param_3 = local_128;
        in_RCX = (longlong *)((ulonglong)local_88 >> 0x20);
        local_b0 = local_b8;
        if (((in_RCX == (longlong *)0x0) || ((ulonglong)local_b8 >> 0x20 == 0)) ||
           (cVar2 = FUN_00e7c020(), puVar15 = local_60, cVar2 != '\0')) {
          puVar15 = local_60;
          lVar10 = local_98;
          pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
          lVar7 = local_98;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar10 = lVar7, lVar9 != 0)) {
            lVar10 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_00d51d20();
          if ((local_38 == '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pVar13 = (pthread_key_t)in_RCX;
          plVar14 = plVar17;
          if (local_res20 != '\0') {
            local_70 = plVar17;
            lVar7 = *unaff_RSI;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *unaff_RSI;
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            if (*(longlong *)(lVar7 + 0x78) == 0) {
              do {
                lVar9 = *(longlong *)(lVar7 + 0x50);
                if (lVar9 == 0) goto LAB_01515608;
                pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar6 != (void *)0x0) {
                  lVar9 = *(longlong *)(lVar7 + 0x50);
                  lVar7 = FUN_00e8b990();
                  if (lVar7 != 0) {
                    lVar9 = *(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                  }
                }
                lVar7 = lVar9;
              } while (*(longlong *)(lVar9 + 0x78) == 0);
              if (*(longlong *)(lVar9 + 0x78) != 0) goto LAB_0151554f;
LAB_01515608:
              uVar11 = 0;
              local_50 = (longlong *)0x0;
            }
            else {
              if (*(longlong *)(lVar7 + 0x78) == 0) goto LAB_01515608;
LAB_0151554f:
              FUN_00d50b00();
              FUN_00d50b20();
              lVar7 = *unaff_RSI;
              pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *unaff_RSI;
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (pthread_key_t)in_RCX;
              if (*(longlong *)(lVar7 + 0x78) == 0) {
                do {
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar9 = *(longlong *)(lVar7 + 0x50);
                  if (lVar9 == 0) {
                    bVar1 = true;
                    lVar7 = 0;
                    goto LAB_01515637;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar9 = *(longlong *)(lVar7 + 0x50);
                    lVar7 = FUN_00e8b990();
                    if (lVar7 != 0) {
                      lVar9 = *(longlong *)
                               (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                    }
                  }
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar7 = lVar9;
                } while (*(longlong *)(lVar9 + 0x78) == 0);
                lVar7 = *(longlong *)(lVar9 + 0x78);
              }
              else {
                lVar7 = *(longlong *)(lVar7 + 0x78);
              }
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              bVar1 = false;
LAB_01515637:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              local_50 = plVar17;
              in_RCX = plVar17;
              if (plVar17 == (longlong *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar18 = (undefined7)((ulonglong)lVar10 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  uVar11 = CONCAT71(uVar18,1);
                }
                else {
                  local_38 = '\0';
                  uVar11 = CONCAT71(uVar18,1);
                }
              }
              if (!bVar1 && lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            plVar14 = local_108;
            lVar10 = unaff_RDI;
            local_100 = uVar11;
            if (*local_108 == 0) {
              do {
                pVar13 = (pthread_key_t)in_RCX;
                lVar7 = *(longlong *)(lVar10 + 0x50);
                if (lVar7 == 0) {
                  local_c0 = 0;
                  plVar17 = (longlong *)0x0;
                  goto LAB_0151589a;
                }
                pvVar6 = _pthread_getspecific(pVar13);
                if (pvVar6 != (void *)0x0) {
                  lVar7 = *(longlong *)(lVar10 + 0x50);
                  lVar10 = FUN_00e8b990();
                  if (lVar10 != 0) {
                    lVar7 = *(longlong *)
                             (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                  }
                }
                lVar10 = lVar7;
              } while (*(longlong *)(lVar7 + 0x78) == 0);
              plVar14 = (longlong *)(lVar7 + 0x78);
            }
            pVar13 = (pthread_key_t)in_RCX;
            if (*plVar14 == 0) {
              local_c0 = 0;
              plVar17 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              uVar11 = FUN_00d50b20();
              pVar13 = (pthread_key_t)in_RCX;
              lVar10 = unaff_RDI;
              if (*local_108 == 0) {
                do {
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar7 = *(longlong *)(lVar10 + 0x50);
                  if (lVar7 == 0) {
                    local_7c = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                    lVar10 = 0;
                    plVar14 = (longlong *)0x0;
                    goto LAB_01515799;
                  }
                  pvVar6 = _pthread_getspecific(pVar13);
                  if (pvVar6 != (void *)0x0) {
                    lVar7 = *(longlong *)(lVar10 + 0x50);
                    lVar10 = FUN_00e8b990();
                    if (lVar10 != 0) {
                      lVar7 = *(longlong *)
                               (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                    }
                  }
                  uVar11 = 0;
                  pVar13 = (pthread_key_t)in_RCX;
                  lVar10 = lVar7;
                } while (*(longlong *)(lVar7 + 0x78) == 0);
                lVar10 = *(longlong *)(lVar7 + 0x78);
                plVar14 = (longlong *)(lVar7 + 0x78);
              }
              else {
                lVar10 = *local_108;
                plVar14 = local_108;
              }
              if (lVar10 != 0) {
                FUN_00d50b00();
              }
              local_7c = 0;
LAB_01515799:
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01822e80();
              if (plVar17 == (longlong *)0x0) {
                local_c0 = 0;
              }
              else {
                uVar18 = (undefined7)((ulonglong)plVar14 >> 8);
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  local_c0 = CONCAT71(uVar18,1);
                }
                else {
                  local_c0 = CONCAT71(uVar18,1);
                }
              }
              bVar12 = (byte)local_7c | lVar10 == 0;
              pVar13 = CONCAT31((int3)((uint)local_7c >> 8),bVar12);
              if (bVar12 == 0) {
                FUN_00d50b20();
              }
            }
LAB_0151589a:
            puVar15 = local_60;
            plVar14 = local_70;
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = local_50;
            local_f0 = '\0';
            local_e0 = '\0';
            local_e8 = plVar17;
            FUN_017380d0();
            if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_100 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = '\0';
          in_RCX = local_b0;
          FUN_012502a0(local_b0,local_88,1);
          bVar1 = false;
          if (plVar14 != (longlong *)0x0) {
            bVar1 = false;
            FUN_00d50b20();
          }
        }
      }
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
LAB_01515e1c:
      uVar19 = 0;
    }
    else {
      local_98 = FUN_00e7bdb0();
      lVar10 = local_68;
      local_b8 = (longlong *)FUN_00e7bdb0();
      plVar17 = local_120;
      if (local_118 != 0) {
        local_198 = *local_60;
        local_190 = 0;
        local_188 = *local_120;
        local_180 = 0;
        local_178 = *local_res8;
        local_170 = 0;
        in_RCX = &local_188;
        local_98 = FUN_01514120(local_78,&local_198,&local_178,local_res10);
      }
      if (local_110 != 0) {
        local_168 = *local_60;
        local_160 = 0;
        local_158 = *plVar17;
        local_150 = 0;
        local_148 = *local_res8;
        local_140 = 0;
        in_RCX = &local_158;
        local_b8 = (longlong *)FUN_01514120(local_78,&local_168,&local_148,local_res10);
      }
      uVar3 = 2;
      if (local_res18 == '\0') {
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0124ae30();
      }
      local_78 = CONCAT44(local_78._4_4_,uVar3);
      param_3 = param_3 | (ulonglong)local_a8;
      plVar17 = (longlong *)(unaff_RDI + 0x80);
      lVar7 = unaff_RDI;
      if (*(longlong *)(unaff_RDI + 0x80) == 0) {
        do {
          lVar9 = *(longlong *)(lVar7 + 0x50);
          if (lVar9 == 0) goto LAB_01515cdb;
          pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar6 != (void *)0x0) {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(longlong *)(lVar9 + 0x80) == 0);
        if (*(longlong *)(lVar9 + 0x80) != 0) goto LAB_01515be5;
LAB_01515cdb:
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_RCX = plVar8;
        }
        FUN_0124ae40();
        pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          if (*plVar17 == 0) goto LAB_01515d81;
LAB_01515dce:
          local_d0 = *plVar17;
        }
        else {
          in_RCX = plVar8;
          if (*plVar17 != 0) goto LAB_01515dce;
LAB_01515d81:
          do {
            lVar7 = *(longlong *)(unaff_RDI + 0x50);
            if (lVar7 == 0) {
              local_d0 = 0;
              goto LAB_01515de6;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar6 != (void *)0x0) {
              lVar7 = *(longlong *)(unaff_RDI + 0x50);
              lVar9 = FUN_00e8b990();
              if (lVar9 != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
            }
            unaff_RDI = lVar7;
          } while (*(longlong *)(unaff_RDI + 0x80) == 0);
          local_d0 = *(longlong *)(unaff_RDI + 0x80);
        }
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
LAB_01515de6:
        local_c8 = '\x01';
        cVar2 = FUN_00d51e10();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') goto LAB_01515e1c;
        local_130 = 0;
        uVar19 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
        local_138 = plVar8;
        FUN_0150ceb0();
      }
      else {
        if (*plVar17 == 0) goto LAB_01515cdb;
LAB_01515be5:
        FUN_00d50b00();
        FUN_00d50b20();
        pVar13 = (pthread_key_t)in_RCX;
        if (param_3 >> 0x20 == 0) goto LAB_01515cdb;
        plVar14 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = unaff_RDI;
          do {
            pVar13 = (pthread_key_t)in_RCX;
            lVar9 = *(longlong *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01515e8a;
            }
            pvVar6 = _pthread_getspecific(pVar13);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(longlong *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            pVar13 = (pthread_key_t)in_RCX;
            lVar7 = lVar9;
          } while (*(longlong *)(lVar9 + 0x80) == 0);
          plVar14 = (longlong *)(lVar9 + 0x80);
        }
        lVar10 = *plVar14;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01515e8a:
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar14 = local_b8;
        uVar4 = FUN_01254260(local_b8,local_98);
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (pthread_key_t)plVar14;
        if ((char)uVar4 == '\0') {
          plVar16 = plVar17;
          if (*plVar17 == 0) {
            lVar10 = 0;
            lVar7 = unaff_RDI;
            do {
              pVar13 = (pthread_key_t)plVar14;
              lVar9 = *(longlong *)(lVar7 + 0x50);
              if (lVar9 == 0) {
                bVar1 = true;
                goto LAB_01515f95;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar9 = *(longlong *)(lVar7 + 0x50);
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  lVar9 = *(longlong *)
                           (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
              }
              pVar13 = (pthread_key_t)plVar14;
              lVar7 = lVar9;
            } while (*(longlong *)(lVar9 + 0x80) == 0);
            plVar16 = (longlong *)(lVar9 + 0x80);
          }
          lVar10 = *plVar16;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_01515f95:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar14 = local_b8;
          FUN_012549c0(local_b8,local_98,1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        plVar16 = plVar17;
        if (*plVar17 == 0) {
          lVar10 = 0;
          lVar7 = unaff_RDI;
          do {
            lVar9 = *(longlong *)(lVar7 + 0x50);
            if (lVar9 == 0) {
              bVar1 = true;
              goto LAB_01516097;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar14);
            if (pvVar6 != (void *)0x0) {
              lVar9 = *(longlong *)(lVar7 + 0x50);
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = lVar9;
          } while (*(longlong *)(lVar9 + 0x80) == 0);
          plVar16 = (longlong *)(lVar9 + 0x80);
        }
        lVar10 = *plVar16;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar1 = false;
LAB_01516097:
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar14);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124ae30();
        if (!bVar1 && lVar10 != 0) {
          FUN_00d50b20();
        }
        pVar13 = (pthread_key_t)plVar14;
        if (iVar5 < (int)local_78) {
          if (*plVar17 == 0) {
            lVar10 = 0;
            do {
              pVar13 = (pthread_key_t)plVar14;
              lVar7 = *(longlong *)(unaff_RDI + 0x50);
              if (lVar7 == 0) {
                bVar1 = true;
                goto LAB_0151616f;
              }
              pvVar6 = _pthread_getspecific(pVar13);
              if (pvVar6 != (void *)0x0) {
                lVar7 = *(longlong *)(unaff_RDI + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              unaff_RDI = lVar7;
              pVar13 = (pthread_key_t)plVar14;
            } while (*(longlong *)(unaff_RDI + 0x80) == 0);
            plVar17 = (longlong *)(unaff_RDI + 0x80);
          }
          lVar10 = *plVar17;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar1 = false;
LAB_0151616f:
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124ae40();
          uVar19 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
          if (!bVar1 && lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar19 = (ulonglong)uVar4 ^ 1;
        }
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_015161ce;
  }
  FUN_00d50b20();
LAB_015161ce:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return uVar19 & 0xffffffff;
}


