// Function: FUN_006d16c0
// Address: 006d16c0
// Size: 4373 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x006d1e65) */
/* WARNING: Removing unreachable block (ram,0x006d2161) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006d16c0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *******ppppppplVar4;
  longlong *******ppppppplVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  longlong *******ppppppplVar10;
  longlong ******pppppplVar11;
  int iVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  longlong *******unaff_RDI;
  bool bVar15;
  code *pcVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 uVar19;
  longlong local_158;
  char local_150;
  longlong *******local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  code *local_118;
  char local_110;
  longlong *******local_108;
  longlong *******local_100;
  char local_f8;
  longlong *******local_f0;
  char local_e8;
  longlong *******local_e0;
  longlong *******local_d8;
  longlong *******local_d0;
  longlong *******local_c8;
  char local_c0;
  code *local_b8;
  longlong *******local_b0;
  longlong *******local_a8;
  longlong *******local_90;
  char local_88;
  longlong *******local_80;
  undefined8 local_78;
  int local_70;
  longlong *******local_68;
  char local_60;
  longlong *******local_58;
  char local_50 [8];
  longlong *******local_48;
  undefined8 local_40;
  int local_38;
  
  uVar19 = FUN_006cb500();
  ppppppplVar4 = local_58;
  if ((local_50[0] == '\0') && (local_58 != (longlong *******)0x0)) {
    uVar19 = FUN_00d50b00();
  }
  uVar17 = 0;
  if (*(int *)((longlong)ppppppplVar4 + 0xc) != 0) {
    local_a8 = (longlong *******)CONCAT44(local_a8._4_4_,param_2);
    local_50[0] = '\0';
    local_58 = (longlong *******)0x0;
    local_b0 = ppppppplVar4;
    local_48 = ppppppplVar4;
    local_40 = 0xffffffff;
    local_38 = 0;
    bVar15 = false;
    while( true ) {
      iVar12 = (int)uVar17;
      if (iVar12 != 0) {
        if (iVar12 < 1) {
          uVar17 = (ulonglong)(uint)-iVar12;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar12);
          FUN_00d23690(uVar19,uVar17);
          local_38 = local_38 + local_40._4_4_;
          uVar17 = 0;
        }
        local_40 = CONCAT44((int)uVar17,(int)local_40);
      }
      lVar2 = (longlong)(int)local_40;
      iVar12 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar12);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar12) break;
      pppppplVar11 = local_48[2];
      local_58 = (longlong *******)pppppplVar11[lVar2 + 1];
      pvVar3 = _pthread_getspecific((pthread_key_t)pppppplVar11);
      pVar9 = (pthread_key_t)pppppplVar11;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar19 = FUN_012e5ae0();
      if (local_90 == (longlong *******)0x0) {
        bVar18 = false;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar9);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_012e5ae0();
        bVar18 = *(int *)((longlong)local_68 + 0xc) != 0;
        if ((local_60 != '\0') && (local_68 != (longlong *******)0x0)) {
          uVar19 = FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != (longlong *******)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      if (bVar18) {
        bVar15 = true;
      }
      uVar17 = local_40 >> 0x20;
    }
    FUN_000be170();
    ppppppplVar4 = local_b0;
    if (bVar15) {
      if ((char)local_a8 != '\0') {
        FUN_006cb500();
        ppppppplVar4 = local_58;
        if ((local_50[0] == '\0') && (local_58 != (longlong *******)0x0)) {
          FUN_00d50b00();
        }
        local_a8 = ppppppplVar4;
        if (unaff_RDI != (longlong *******)0x0) {
          FUN_00d50b00();
        }
        local_68 = (longlong *******)((ulonglong)local_68 & 0xffffffffffffff00);
        local_90 = unaff_RDI;
        do {
          ppppppplVar4 = local_90;
          (*(code *)(*local_90)[0x6e])();
          ppppppplVar14 = local_58;
          if (local_58 == ppppppplVar4) {
            if ((((char)local_68 == '\0') && (local_58 != (longlong *******)0x0)) &&
               (local_50[0] != '\0')) {
              ppppppplVar14 = ppppppplVar4;
              goto LAB_006d1997;
            }
          }
          else {
            local_90 = local_58;
            if (local_50[0] == '\0') {
              if ((char)local_68 == '\0') {
                ppppppplVar4 = (longlong *******)&local_68;
              }
              else {
                FUN_00d50b20();
                ppppppplVar4 = (longlong *******)&local_68;
              }
            }
            else {
              if ((char)local_68 != '\0') {
                FUN_00d50b20();
              }
LAB_006d1997:
              local_68 = (longlong *******)CONCAT71(local_68._1_7_,1);
              ppppppplVar4 = (longlong *******)local_50;
            }
            *(char *)ppppppplVar4 = '\0';
            ppppppplVar4 = ppppppplVar14;
          }
          ppppppplVar14 = local_58;
          if ((local_50[0] != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_026fddb0 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
            _DAT_026e0ab8 = FUN_00015ff0();
            _DAT_026e0aa0 = "MDMetaWindowController";
            _DAT_026e0aa8 = 0x198;
            _DAT_026e0ab0 = FUN_0006dea0;
            _DAT_026e0ac0 = 0;
            uRam00000000026e0ac8 = 0;
            _DAT_026e0ad0 = 0;
            _DAT_026e0b48 = 0;
            uRam00000000026e0b50 = 0;
            _DAT_026e0b58 = 0;
            DAT_026e0b5a = 1;
            _DAT_026e0ad8 = 0;
            uRam00000000026e0ae0 = 0;
            _DAT_026e0ae8 = 0;
            uRam00000000026e0af0 = 0;
            _DAT_026e0af8 = 0;
            uRam00000000026e0b00 = 0;
            _DAT_026e0b08 = 0;
            uRam00000000026e0b10 = 0;
            _DAT_026e0b18 = 0;
            uRam00000000026e0b20 = 0;
            _DAT_026e0b28 = 0;
            uRam00000000026e0b30 = 0;
            _DAT_026e0b38 = 0;
            uRam00000000026e0b40 = 0;
            DAT_026e0b63 = 0;
            _DAT_026e0b5b = 0;
            ___cxa_guard_release();
          }
          ppppppplVar10 = (longlong *******)&DAT_02802688;
          if (ppppppplVar4 != (longlong *******)0x0) {
            (*(code *)(*ppppppplVar4)[0x6c])();
            cVar1 = FUN_00e85ea0();
            ppppppplVar10 = (longlong *******)&local_90;
            if (cVar1 == '\0') {
              ppppppplVar10 = (longlong *******)&DAT_02802688;
            }
          }
          ppppppplVar4 = local_b0;
          if (*ppppppplVar10 != (longlong ******)0x0) {
            local_d0 = local_90;
            if (((char)local_68 == '\0') && (local_90 != (longlong *******)0x0)) {
              FUN_00d50b00();
              ppppppplVar4 = local_b0;
            }
            goto joined_r0x006d1b20;
          }
        } while (local_90 != (longlong *******)0x0);
        local_d0 = (longlong *******)0x0;
joined_r0x006d1b20:
        local_b0 = ppppppplVar4;
        if (unaff_RDI != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        ppppppplVar5 = (longlong *******)FUN_00e8fc40();
        FUN_00d4ff40();
        *ppppppplVar5 = (longlong ******)&DAT_02572358;
        pcVar16 = DAT_02572370;
        (*DAT_02572370)();
        ppppppplVar10 = (longlong *******)&DAT_02572358;
        if (local_a8 == (longlong *******)0x0) {
LAB_006d1e38:
          local_50[0] = '\0';
          local_58 = (longlong *******)0x0;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_48 = ppppppplVar5;
          while( true ) {
            lVar2 = (longlong)(int)local_40;
            iVar12 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar12);
            if (*(int *)((longlong)local_48 + 0xc) <= iVar12) break;
            local_58 = (longlong *******)local_48[2][lVar2 + 1];
            pvVar3 = _pthread_getspecific((pthread_key_t)local_48[2]);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar12 = FUN_01326de0();
            if (iVar12 != 0) {
              uVar19 = FUN_00115190();
              lVar2 = DAT_026f6fb0;
              if (DAT_026f6fb0 != 0) {
                uVar19 = FUN_00d50b00();
              }
              lVar6 = DAT_026f6fb8;
              if (DAT_026f6fb8 != 0) {
                uVar19 = FUN_00d50b00();
              }
              local_158 = lVar6;
              local_150 = '\x01';
              FUN_01f6ca30(uVar19,&local_158);
              ppppppplVar14 = local_58;
              if (local_50[0] == '\0') {
                if (((local_58 != (longlong *******)0x0) && (FUN_00d50b00(), local_50[0] != '\0'))
                   && (local_58 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50[0] = '\0';
              }
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              iVar12 = (*(code *)(*ppppppplVar14)[0xbc])();
              FUN_00d50b20();
              bVar15 = false;
              if (iVar12 == 0) goto LAB_006d1ffc;
              uVar17 = CONCAT71((int7)((ulonglong)ppppppplVar14 >> 8),1);
              bVar18 = true;
              goto LAB_006d27b9;
            }
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar12 = -local_40._4_4_;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar12 = 0;
              }
              local_40 = CONCAT44(iVar12,(int)local_40);
            }
          }
          FUN_00115190();
          bVar15 = false;
        }
        else {
          local_e0 = (longlong *******)&DAT_02572358;
          local_b8 = pcVar16;
          local_50[0] = '\0';
          local_58 = (longlong *******)0x0;
          local_48 = local_a8;
          local_38 = 0;
          local_40 = 0;
          if (0 < *(int *)((longlong)local_a8 + 0xc)) {
            lVar2 = 0;
            do {
              local_58 = (longlong *******)local_a8[2][lVar2];
              pvVar3 = _pthread_getspecific((pthread_key_t)local_a8);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              ppppppplVar4 = local_90;
              if (local_88 == '\0') {
                if (local_90 != (longlong *******)0x0) {
                  FUN_00d50b00();
                  if ((local_88 != '\0') && (local_90 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_006d1cab;
                }
              }
              else if (local_90 != (longlong *******)0x0) {
LAB_006d1cab:
                local_88 = '\0';
                local_90 = (longlong *******)0x0;
                local_d8 = ppppppplVar4;
                local_80 = ppppppplVar4;
                local_78 = 0xffffffff;
                local_70 = 0;
                local_78._4_4_ = 0;
                while( true ) {
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar12 = -local_78._4_4_;
                    }
                    else {
                      iVar12 = (int)local_78 - local_78._4_4_;
                      local_78 = CONCAT44(local_78._4_4_,iVar12);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar12 = 0;
                    }
                    local_78 = CONCAT44(iVar12,(int)local_78);
                  }
                  lVar6 = (longlong)(int)local_78;
                  iVar12 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar12);
                  if (*(int *)((longlong)local_80 + 0xc) <= iVar12) break;
                  local_90 = (longlong *******)local_80[2][lVar6 + 1];
                  pvVar3 = _pthread_getspecific((pthread_key_t)local_80[2]);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  ppppppplVar14 = local_c8;
                  if (local_c0 == '\0') {
                    if (local_c8 != (longlong *******)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_c0 = '\0';
                  }
                  local_68 = ppppppplVar14;
                  local_60 = '\0';
                  FUN_00d235a0();
                  if ((local_60 != '\0') && (local_68 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if (ppppppplVar14 != (longlong *******)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_001159b0();
                FUN_00d50b20();
              }
              lVar2 = lVar2 + 1;
              local_40 = CONCAT44(local_40._4_4_,(int)lVar2);
            } while (lVar2 < *(int *)((longlong)local_a8 + 0xc));
          }
          FUN_000be170();
          pcVar16 = local_b8;
          ppppppplVar10 = local_e0;
          ppppppplVar4 = local_b0;
          if (ppppppplVar5 != (longlong *******)0x0) goto LAB_006d1e38;
          bVar15 = true;
        }
LAB_006d1ffc:
        FUN_00d23310();
        ppppppplVar5 = local_58;
        ppppppplVar13 = (longlong *******)&local_90;
        if (local_50[0] != '\0') {
          ppppppplVar13 = (longlong *******)local_50;
        }
        local_90 = (longlong *******)CONCAT71(local_90._1_7_,local_50[0]);
        *(char *)ppppppplVar13 = '\0';
        if ((local_50[0] != '\0') && (ppppppplVar5 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_90 == '\0') && (ppppppplVar5 != (longlong *******)0x0)) {
          FUN_00d50b00();
        }
        local_90 = local_d0;
        local_88 = '\0';
        local_108 = ppppppplVar5;
        FUN_006d30c0();
        (*(code *)(*local_58)[0xc5])();
        if ((local_50[0] != '\0') && (local_58 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        ppppppplVar5 = local_68;
        if ((((local_60 == '\0') && (local_68 != (longlong *******)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        local_e0 = ppppppplVar5;
        pcVar7 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(longlong ********)pcVar7 = ppppppplVar10;
        (*pcVar16)();
        local_b8 = pcVar7;
        plVar8 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar8 + 0x18))();
        if (local_a8 != (longlong *******)0x0) {
          local_50[0] = '\0';
          local_58 = (longlong *******)0x0;
          local_48 = local_a8;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_d8 = (longlong *******)CONCAT44(local_d8._4_4_,0xffffff01);
          ppppppplVar14 = (longlong *******)&local_68;
LAB_006d2195:
          lVar2 = (longlong)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (iVar12 < *(int *)((longlong)local_48 + 0xc)) {
            pppppplVar11 = local_48[2];
            local_58 = (longlong *******)pppppplVar11[lVar2 + 1];
            pvVar3 = _pthread_getspecific((pthread_key_t)pppppplVar11);
            pVar9 = (pthread_key_t)pppppplVar11;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            iVar12 = *(int *)((longlong)local_90 + 0xc);
            if ((local_88 != '\0') && (local_90 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 != 0) {
              local_90 = local_58;
              local_88 = '\0';
              FUN_00d21140();
              if ((local_88 != '\0') && (local_90 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            pvVar3 = _pthread_getspecific(pVar9);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_012e5ae0();
            ppppppplVar4 = local_90;
            if (local_88 == '\0') {
              if (local_90 != (longlong *******)0x0) {
                FUN_00d50b00();
                if ((local_88 != '\0') && (local_90 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_006d22e0;
              }
            }
            else if (local_90 != (longlong *******)0x0) {
LAB_006d22e0:
              local_88 = '\0';
              local_90 = (longlong *******)0x0;
              local_80 = ppppppplVar4;
              local_78 = 0xffffffff;
              local_70 = 0;
              local_78._4_4_ = 0;
              do {
                if (local_78._4_4_ != 0) {
                  if (local_78._4_4_ < 1) {
                    iVar12 = -local_78._4_4_;
                  }
                  else {
                    iVar12 = (int)local_78 - local_78._4_4_;
                    local_78 = CONCAT44(local_78._4_4_,iVar12);
                    FUN_00d23690();
                    local_70 = local_70 + local_78._4_4_;
                    iVar12 = 0;
                  }
                  local_78 = CONCAT44(iVar12,(int)local_78);
                }
                lVar2 = (longlong)(int)local_78;
                iVar12 = (int)local_78 + 1;
                local_78 = CONCAT44(local_78._4_4_,iVar12);
                if (*(int *)((longlong)local_80 + 0xc) <= iVar12) goto LAB_006d25da;
                pppppplVar11 = local_80[2];
                local_90 = (longlong *******)pppppplVar11[lVar2 + 1];
                pvVar3 = _pthread_getspecific((pthread_key_t)pppppplVar11);
                pVar9 = (pthread_key_t)pppppplVar11;
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar19 = FUN_01264240();
                local_100 = local_c8;
                local_f8 = 0;
                if (local_c0 == '\0') {
                  if (local_c8 != (longlong *******)0x0) {
                    uVar19 = FUN_00d50b00();
                  }
                }
                else {
                  local_c0 = '\0';
                }
                local_f8 = '\x01';
                FUN_00257f20(uVar19,&local_100);
                ppppppplVar4 = local_68;
                if (local_60 == '\0') {
                  if (((local_68 != (longlong *******)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
                     (local_68 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                }
                if ((local_f8 != '\0') && (local_100 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
                ppppppplVar10 = local_58;
                if (ppppppplVar4 == (longlong *******)0x0) {
                  local_148 = local_58;
                  local_140 = '\0';
                  pvVar3 = _pthread_getspecific(pVar9);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar19 = FUN_01264240();
                  ppppppplVar4 = local_68;
                  local_e8 = 0;
                  if (local_60 == '\0') {
                    if (local_68 != (longlong *******)0x0) {
                      uVar19 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_60 = '\0';
                  }
                  local_e8 = '\x01';
                  local_f0 = ppppppplVar4;
                  FUN_00257e70(uVar19,&local_f0);
                  if ((local_e8 != '\0') && (local_f0 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_140 != '\0') && (local_148 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  FUN_00d50b20();
                  if (ppppppplVar4 != ppppppplVar10) goto LAB_006d25d0;
                }
              } while( true );
            }
            goto LAB_006d25ee;
          }
          FUN_000be170();
          pcVar7 = local_b8;
          ppppppplVar4 = local_b0;
        }
        FUN_006d30c0();
        local_110 = '\0';
        local_118 = pcVar7;
        FUN_007843e0();
        if ((local_110 != '\0') && (local_118 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        bVar18 = false;
        uVar17 = CONCAT71((int7)((ulonglong)ppppppplVar14 >> 8),1);
joined_r0x006d277c:
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (local_e0 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (local_108 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
LAB_006d27b9:
        if (!bVar15) {
          FUN_00d50b20();
        }
        if (local_d0 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (local_a8 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if (bVar18) goto LAB_006d27f7;
      }
      uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    }
    else {
      uVar17 = 0;
    }
LAB_006d27f7:
    if (ppppppplVar4 == (longlong *******)0x0) goto LAB_006d2804;
  }
  FUN_00d50b20();
LAB_006d2804:
  return uVar17 & 0xffffffff;
LAB_006d25d0:
  local_d8 = (longlong *******)((ulonglong)local_d8 & 0xffffffff00000000);
LAB_006d25da:
  FUN_001159b0();
  uVar19 = FUN_00d50b20();
LAB_006d25ee:
  lVar2 = DAT_026f6fb0;
  if (((ulonglong)local_d8 & 1) == 0) {
    if (DAT_026f6fb0 != 0) {
      uVar19 = FUN_00d50b00();
    }
    ppppppplVar4 = local_b0;
    lVar6 = DAT_02726d00;
    local_138 = lVar2;
    local_130 = '\x01';
    if (DAT_02726d00 != 0) {
      uVar19 = FUN_00d50b00();
    }
    local_128 = lVar6;
    local_120 = '\x01';
    FUN_01f6ca30(uVar19,&local_128);
    ppppppplVar14 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != (longlong *******)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
         (local_90 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)(*ppppppplVar14)[0xbc])();
    FUN_00d50b20();
    FUN_000be170();
    bVar18 = true;
    uVar17 = 0;
    goto joined_r0x006d277c;
  }
  if (local_40._4_4_ != 0) {
    if (local_40._4_4_ < 1) {
      iVar12 = -local_40._4_4_;
    }
    else {
      local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
      FUN_00d23690();
      local_38 = local_38 + local_40._4_4_;
      iVar12 = 0;
    }
    local_40 = CONCAT44(iVar12,(int)local_40);
  }
  goto LAB_006d2195;
}


