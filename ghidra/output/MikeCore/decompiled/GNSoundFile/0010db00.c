// Function: FUN_0010db00
// Address: 0010db00
// Size: 3362 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"


/* WARNING: Removing unreachable block (ram,0x0010e1f5) */
/* WARNING: Removing unreachable block (ram,0x0010e201) */
/* WARNING: Removing unreachable block (ram,0x0010dd6a) */
/* WARNING: Removing unreachable block (ram,0x0010dda0) */
/* WARNING: Removing unreachable block (ram,0x0010dd6c) */
/* WARNING: Removing unreachable block (ram,0x0010dda2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0010db00(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  int local_188;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  local_88 = puVar6;
  uVar12 = (*DAT_02572370)();
  local_168 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar12 = FUN_01cac990(uVar12,&local_168);
  plVar11 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar7 = DAT_027e92b0;
  if ((plVar11 == (longlong *)0x0) || (plVar10 = plVar11, *(int *)((longlong)plVar11 + 0xc) == 0)) {
    if (DAT_027e92b0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_158 = lVar7;
    local_150 = '\x01';
    FUN_01cac990(uVar12,&local_158);
    plVar10 = local_68;
    if (plVar11 == local_68) {
LAB_0010dc74:
      plVar10 = plVar11;
      if (local_60[0] != '\0') {
LAB_0010dc7a:
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar11 = plVar10;
          goto LAB_0010dc74;
        }
        if (local_60[0] == '\0') goto LAB_0010dc88;
        goto LAB_0010dc7a;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_60[0] = '\0';
    }
LAB_0010dc88:
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar10 == (longlong *)0x0) {
LAB_0010e812:
    *unaff_RDI = local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (1 < *(int *)((longlong)plVar10 + 0xc)) {
      FUN_0010f160(0,FUN_0010f200);
      if (local_68 == plVar10) {
LAB_0010dd08:
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_0010dd08;
        }
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) goto LAB_0010e812;
    }
    local_188 = -1;
LAB_0010dd60:
    lVar7 = (longlong)local_188;
    local_188 = local_188 + 1;
    if (local_188 < *(int *)((longlong)plVar10 + 0xc)) {
      lVar7 = *(longlong *)(plVar10[2] + 8 + lVar7 * 8);
      uVar12 = FUN_01f27fe0();
      local_140 = '\0';
      local_148 = lVar7;
      FUN_002a0320(uVar12,&local_148);
      plVar11 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_024c5080;
        uVar12 = FUN_00d500e0();
        local_80 = (longlong *)0xbff0000000000000;
        local_120 = '\0';
        local_128 = lVar7;
        cVar4 = FUN_00b70580(uVar12,&local_80);
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          bVar2 = true;
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          uVar12 = (**(code **)(*plVar8 + 0x18))();
          plVar1 = DAT_026d8408;
          local_110 = '\0';
          local_118 = lVar7;
          if (DAT_026d8408 != (longlong *)0x0) {
            uVar12 = FUN_00d50b00();
          }
          local_68 = plVar1;
          local_60[0] = '\0';
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar12 = FUN_00d470c0((int)local_80);
          plVar3 = local_40;
          local_b0 = 0;
          plVar1 = DAT_026f6ee0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              uVar12 = FUN_00d50b00();
              plVar1 = DAT_026f6ee0;
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = plVar3;
          DAT_026f6ee0 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            local_b0 = '\x01';
            uVar12 = FUN_00d50b00();
          }
          local_60[0] = '\0';
          local_68 = plVar1;
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = '\0';
          local_108 = plVar8;
          FUN_00d21140();
          bVar2 = false;
          if ((local_100 != '\0') && (bVar2 = false, local_108 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = false;
          }
        }
        FUN_00d50b20();
        if (plVar8 == (longlong *)0x0) {
          FUN_00d23310();
          plVar8 = local_68;
          local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
          pplVar9 = (longlong **)local_60;
          if (local_60[0] == '\0') {
            pplVar9 = &local_80;
          }
          *(char *)pplVar9 = '\0';
          if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar8 + 0x370))();
          plVar1 = local_40;
          FUN_014ffc90();
          plVar8 = local_68;
          local_a0 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_a0 = '\x01';
          local_a8 = plVar8;
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_80 != '\0') {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_00d23310();
            plVar8 = local_68;
            local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
            pplVar9 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar9 = &local_80;
            }
            *(char *)pplVar9 = '\0';
            if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_90 = 0;
            if ((char)local_80 == '\0') {
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = (longlong *)((ulonglong)local_80 & 0xffffffffffffff00);
            }
            local_90 = '\x01';
            local_98 = plVar8;
            FUN_01500300();
            plVar8 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar8 != (longlong *)0x0) {
              local_68 = plVar8;
              local_60[0] = '\0';
              cVar4 = FUN_00d23d70();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                uVar12 = FUN_01f27fe0();
                local_f8 = plVar8;
                local_f0 = '\0';
                FUN_002a0320(uVar12,&local_f8);
                if (local_68 == (longlong *)0x0) {
LAB_0010e73e:
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_60[0] == '\0') {
                    plVar11 = local_68;
                    if (local_68 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    goto LAB_0010e73e;
                  }
                  local_60[0] = '\0';
                  plVar11 = local_68;
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 == (longlong *)0x0) {
                  plVar11 = (longlong *)0x0;
                }
                else {
                  local_e0 = '\0';
                  local_e8 = plVar11;
                  FUN_00d21140();
                  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00d50b20();
            }
          }
        }
        else if (!bVar2) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_00b88670();
        if (iVar5 == 1) {
          FUN_00b88600();
          plVar8 = local_80;
          local_38 = 0;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_38 = '\x01';
          local_40 = plVar8;
          uVar12 = FUN_00b84ae0();
          plVar8 = local_68;
          if (local_60[0] == '\0') {
            if (((local_68 != (longlong *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          local_58 = local_88;
          local_50 = 0xffffffff;
          local_48 = 0;
          iVar5 = 0;
          do {
            if (iVar5 != 0) {
              if (iVar5 < 1) {
                iVar5 = -iVar5;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar5);
                uVar12 = FUN_00d23690(uVar12,iVar5);
                local_48 = local_48 + iVar5;
                iVar5 = 0;
              }
              local_50 = CONCAT44(iVar5,(int)local_50);
            }
            lVar7 = (longlong)(int)local_50;
            iVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar5);
            if (*(int *)((longlong)local_58 + 0xc) <= iVar5) {
              FUN_00114fb0();
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              break;
            }
            plVar1 = *(longlong **)(local_58[2] + 8 + lVar7 * 8);
            local_68 = plVar1;
            local_80 = plVar1;
            if ((DAT_026d8478 == '\0') &&
               (iVar5 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_01, iVar5 != 0)) {
              _DAT_026f9358 = FUN_00d4fe50();
              _DAT_026f9340 = "GNSoundFile";
              _DAT_026f9348 = 0x98;
              _DAT_026f9350 = FUN_00083bc0;
              _DAT_026f9360 = 0;
              uRam00000000026f9368 = 0;
              _DAT_026f9370 = 0;
              _DAT_026f93e8 = 0;
              uRam00000000026f93f0 = 0;
              _DAT_026f93f8 = 0;
              DAT_026f93fa = 3;
              _DAT_026f9378 = 0;
              uRam00000000026f9380 = 0;
              _DAT_026f9388 = 0;
              uRam00000000026f9390 = 0;
              _DAT_026f9398 = 0;
              uRam00000000026f93a0 = 0;
              _DAT_026f93a8 = 0;
              uRam00000000026f93b0 = 0;
              _DAT_026f93b8 = 0;
              uRam00000000026f93c0 = 0;
              _DAT_026f93c8 = 0;
              uRam00000000026f93d0 = 0;
              _DAT_026f93d8 = 0;
              uRam00000000026f93e0 = 0;
              DAT_026f9403 = 0;
              _DAT_026f93fb = 0;
              uVar12 = ___cxa_guard_release();
            }
            pplVar9 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar9 = &local_80;
              uVar12 = extraout_XMM0_Da;
              if (cVar4 == '\0') {
                pplVar9 = (longlong **)&DAT_02802688;
              }
            }
            if (*pplVar9 != (longlong *)0x0) {
              FUN_00b88600();
              local_c8 = local_d8;
              local_c0 = 0;
              if (local_d0 == '\0') {
                if (local_d8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d0 = '\0';
              }
              local_c0 = '\x01';
              FUN_00b84ae0();
              cVar4 = (**(code **)(*local_80 + 0x50))();
              uVar12 = extraout_XMM0_Da_00;
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                uVar12 = FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                uVar12 = FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                uVar12 = FUN_00d50b20();
              }
              if (cVar4 != '\0') goto LAB_0010e37c;
            }
            iVar5 = local_50._4_4_;
          } while( true );
        }
        local_138 = plVar11;
        local_130 = '\0';
        FUN_00d21140();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0010e7d0;
    }
    FUN_00115910();
    *unaff_RDI = local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0010e37c:
  FUN_00114fb0();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0010e7d0:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_0010dd60;
}


