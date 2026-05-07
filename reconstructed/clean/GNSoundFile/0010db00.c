// Function: FUN_0010db00
// Address: 0010db00
// Size: 3362 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void* FUN_0010db00(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int local_188;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  void*local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_68;
  char local_60 [8];
  void*local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  local_88 = puVar6;
  uVar12 = (*g_02572370)();
  local_168 = g_026fcec0;
  if (g_026fcec0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar12 = FUN_01cac990(uVar12,&local_168);
  plVar11 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (int64_t *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar7 = g_027e92b0;
  if ((plVar11 == (int64_t *)0x0) || (plVar10 = plVar11, *(int *)((int64_t)plVar11 + 0xc) == 0)) {
    if (g_027e92b0 != 0) {
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
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar11 = plVar10;
          goto LAB_0010dc74;
        }
        if (local_60[0] == '\0') goto LAB_0010dc88;
        goto LAB_0010dc7a;
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_60[0] = '\0';
    }
LAB_0010dc88:
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_0010e812:
    *this_ptr = local_88;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (1 < *(int *)((int64_t)plVar10 + 0xc)) {
      FUN_0010f160(0,FUN_0010f200);
      if (local_68 == plVar10) {
LAB_0010dd08:
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_0010dd08;
        }
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) goto LAB_0010e812;
    }
    local_188 = -1;
LAB_0010dd60:
    lVar7 = (int64_t)local_188;
    local_188 = local_188 + 1;
    if (local_188 < *(int *)((int64_t)plVar10 + 0xc)) {
      lVar7 = *(int64_t *)(plVar10[2] + 8 + lVar7 * 8);
      uVar12 = FUN_01f27fe0();
      local_140 = '\0';
      local_148 = lVar7;
      FUN_002a0320(uVar12,&local_148);
      plVar11 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_024c5080;
        uVar12 = FUN_00d500e0();
        local_80 = (int64_t *)0xbff0000000000000;
        local_120 = '\0';
        local_128 = lVar7;
        cVar4 = FUN_00b70580(uVar12,&local_80);
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          bVar2 = true;
          plVar8 = (int64_t *)0x0;
        }
        else {
          plVar8 = (int64_t *)FUN_00e8fc40();
          FUN_00022d50();
          uVar12 = (**(code **)(*plVar8 + 0x18))();
          plVar1 = g_026d8408;
          local_110 = '\0';
          local_118 = lVar7;
          if (g_026d8408 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
          local_68 = plVar1;
          local_60[0] = '\0';
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar12 = FUN_00d470c0((int)local_80);
          plVar3 = local_40;
          local_b0 = 0;
          plVar1 = g_026f6ee0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              uVar12 = FUN_00d50b00();
              plVar1 = g_026f6ee0;
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = plVar3;
          g_026f6ee0 = plVar1;
          if (plVar1 != (int64_t *)0x0) {
            local_b0 = '\x01';
            uVar12 = FUN_00d50b00();
          }
          local_60[0] = '\0';
          local_68 = plVar1;
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = '\0';
          local_108 = plVar8;
          FUN_00d21140();
          bVar2 = false;
          if ((local_100 != '\0') && (bVar2 = false, local_108 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar2 = false;
          }
        }
        FUN_00d50b20();
        if (plVar8 == (int64_t *)0x0) {
          FUN_00d23310();
          plVar8 = local_68;
          local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_60[0]);
          pplVar9 = (int64_t **)local_60;
          if (local_60[0] == '\0') {
            pplVar9 = &local_80;
          }
          *(char *)pplVar9 = '\0';
          if ((local_60[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar8 + 0x370))();
          plVar1 = local_40;
          FUN_014ffc90();
          plVar8 = local_68;
          local_a0 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_a0 = '\x01';
          local_a8 = plVar8;
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_80 != '\0') {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_00d23310();
            plVar8 = local_68;
            local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_60[0]);
            pplVar9 = (int64_t **)local_60;
            if (local_60[0] == '\0') {
              pplVar9 = &local_80;
            }
            *(char *)pplVar9 = '\0';
            if ((local_60[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_90 = 0;
            if ((char)local_80 == '\0') {
              if (plVar8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = (int64_t *)((uint64_t)local_80 & 0xffffffffffffff00);
            }
            local_90 = '\x01';
            local_98 = plVar8;
            FUN_01500300();
            plVar8 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar8 != (int64_t *)0x0) {
              local_68 = plVar8;
              local_60[0] = '\0';
              cVar4 = FUN_00d23d70();
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                uVar12 = FUN_01f27fe0();
                local_f8 = plVar8;
                local_f0 = '\0';
                FUN_002a0320(uVar12,&local_f8);
                if (local_68 == (int64_t *)0x0) {
LAB_0010e73e:
                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_60[0] == '\0') {
                    plVar11 = local_68;
                    if (local_68 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    goto LAB_0010e73e;
                  }
                  local_60[0] = '\0';
                  plVar11 = local_68;
                }
                if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 == (int64_t *)0x0) {
                  plVar11 = (int64_t *)0x0;
                }
                else {
                  local_e0 = '\0';
                  local_e8 = plVar11;
                  FUN_00d21140();
                  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
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
            if (local_80 != (int64_t *)0x0) {
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
            if (((local_68 != (int64_t *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_60[0] = '\0';
          local_68 = (int64_t *)0x0;
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
            lVar7 = (int64_t)(int)local_50;
            iVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar5);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar5) {
              FUN_00114fb0();
              if (plVar8 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              break;
            }
            plVar1 = *(int64_t **)(local_58[2] + 8 + lVar7 * 8);
            local_68 = plVar1;
            local_80 = plVar1;
            if ((g_026d8478 == '\0') &&
               (iVar5 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_01, iVar5 != 0)) {
              g_026f9358 = FUN_00d4fe50();
              g_026f9340 = "GNSoundFile";
              g_026f9348 = 0x98;
              g_026f9350 = FUN_00083bc0;
              g_026f9360 = 0;
              ram_00000000026f9368 = 0;
              g_026f9370 = 0;
              g_026f93e8 = 0;
              ram_00000000026f93f0 = 0;
              g_026f93f8 = 0;
              g_026f93fa = 3;
              g_026f9378 = 0;
              ram_00000000026f9380 = 0;
              g_026f9388 = 0;
              ram_00000000026f9390 = 0;
              g_026f9398 = 0;
              ram_00000000026f93a0 = 0;
              g_026f93a8 = 0;
              ram_00000000026f93b0 = 0;
              g_026f93b8 = 0;
              ram_00000000026f93c0 = 0;
              g_026f93c8 = 0;
              ram_00000000026f93d0 = 0;
              g_026f93d8 = 0;
              ram_00000000026f93e0 = 0;
              g_026f9403 = 0;
              g_026f93fb = 0;
              uVar12 = ___cxa_guard_release();
            }
            pplVar9 = (int64_t **)&g_02802688;
            if (plVar1 != (int64_t *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar9 = &local_80;
              uVar12 = extraout_XMM0_Da;
              if (cVar4 == '\0') {
                pplVar9 = (int64_t **)&g_02802688;
              }
            }
            if (*pplVar9 != (int64_t *)0x0) {
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
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
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
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0010e7d0;
    }
    FUN_00115910();
    *this_ptr = local_88;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0010e37c:
  FUN_00114fb0();
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0010e7d0:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_0010dd60;
}

