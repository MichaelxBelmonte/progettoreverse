// ===================================================================
// GNSoundFile — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (3):
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


// ============================================================
// 0010db00
// ============================================================
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



// ============================================================
// 00244b20
// ============================================================
// Function: FUN_00244b20
// Address: 00244b20
// Size: 2266 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


uint32_t FUN_00244b20(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  uint32_t uVar7;
  int iVar8;
  char *pcVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar11;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  double dVar14;
  uint64_t uVar15;
  float extraout_XMM0_Db;
  uint64_t uVar16;
  uint extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  float fVar21;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t in_XMM3 [16];
  uint8_t auVar26 [16];
  float fVar29;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  double local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_58;
  bool local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar6 = FUN_00245720();
  if (cVar6 == '\0') goto LAB_00244c11;
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar10 = local_48;
  local_38[0] = local_40[0];
  pcVar9 = local_38;
  if (local_40[0] != '\0') {
    pcVar9 = local_40;
  }
  *pcVar9 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00244ba0:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00244ba0;
  (**(code **)(*plVar10 + 0x988))();
  iVar8 = *(int *)((int64_t)local_58 + 0xc);
  if (local_50 != false) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (iVar8 == 0) {
LAB_00244c11:
    local_98 = *arg1;
    local_90 = '\0';
    uVar7 = FUN_01e56d30();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    return uVar7;
  }
  pplVar11 = &local_58;
  FUN_01d384d0();
  local_78 = local_58;
  local_70 = 0;
  if (local_50 == false) {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar1;
  cVar6 = FUN_0010f8e0();
  uVar7 = 0;
  if (cVar6 == '\0') goto LAB_0024517c;
  FUN_0010db00();
  plVar1 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar10 = local_48;
  bVar12 = local_40[0] == '\0';
  local_58 = local_48;
  if (bVar12) {
    local_50 = false;
  }
  else {
    local_50 = true;
    local_40[0] = '\0';
  }
  local_50 = !bVar12;
  if ((g_026d8478 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_00244dbe:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00244dbe;
  }
  plVar10 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    uVar13 = FUN_00d23310();
    plVar2 = local_48;
    bVar12 = local_40[0] == '\0';
    local_58 = local_48;
    if (bVar12) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_40[0] = '\0';
    }
    local_50 = !bVar12;
    if ((g_026fdd40 == '\0') &&
       (iVar8 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_01, iVar8 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar13 = ___cxa_guard_release();
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar6 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar6 = FUN_00e8db60();
        uVar13 = extraout_XMM0_Da_00;
        if (cVar6 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
        else {
          pplVar11 = &local_58;
        }
      }
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar4 = g_026f6ee0;
    if (g_026f6ee0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_000175c0(uVar13,&local_a8);
    plVar5 = local_48;
    FUN_00053ac0();
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      FUN_00e85ea0();
    }
    local_80 = (double)FUN_00d45bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((0 < *(int *)((int64_t)plVar1 + 0xc)) && (0.0 < local_80)) goto LAB_0024500d;
  }
  else {
    local_80 = (double)FUN_00b7a6e0();
    if ((0 < *(int *)((int64_t)plVar1 + 0xc)) && (0.0 < local_80)) {
LAB_0024500d:
      fVar21 = 0.0;
      dVar14 = local_80;
      FUN_01d384c0();
      fVar29 = (float)((uint64_t)dVar14 >> 0x20);
      dVar14 = (double)FUN_00244970();
      uVar15 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 3000))();
      FUN_01e436c0();
      uVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x938))(SUB84(dVar14,0));
      uVar16 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x938))(SUB84(local_80 + dVar14,0));
      fVar22 = (float)uVar15 * g_02394dc4;
      auVar26._0_4_ = g_023945e0 & (uint)fVar22;
      auVar26._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar15 >> 0x20);
      auVar26._8_4_ = _UNK_023945e8 & extraout_XMM0_Dc;
      auVar26._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar27._4_4_ = _UNK_023945f4;
      auVar27._0_4_ = g_023945f0;
      auVar27._8_4_ = _UNK_023945f8;
      auVar27._12_4_ = _UNK_023945fc;
      auVar17._4_12_ = SUB1612(auVar26 | auVar27,4);
      auVar17._0_4_ = SUB164(auVar26 | auVar27,0) + fVar22;
      auVar26 = roundss(in_XMM3,auVar17,0xb);
      fVar29 = fVar29 + extraout_XMM0_Db;
      auVar23._4_4_ = fVar29;
      auVar23._0_4_ = fVar29;
      auVar23._8_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar23._12_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ =
           (((fVar29 + g_02390d00) - extraout_XMM0_Db) - auVar26._0_4_) * g_0239011c +
           extraout_XMM0_Db;
      auVar25._8_4_ = extraout_XMM0_Dc_00;
      auVar25._0_8_ = uVar3;
      auVar25._12_4_ = extraout_XMM0_Dd_01;
      auVar27 = insertps(auVar25,auVar24,0x10);
      auVar18._0_4_ = (float)(g_023945e0 & (uint)auVar27._0_4_ | g_023945f0) + auVar27._0_4_;
      auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar27._4_4_ | _UNK_023945f4) + auVar27._4_4_;
      auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar27._8_4_ | _UNK_023945f8) + auVar27._8_4_;
      auVar18._12_4_ =
           (float)(_UNK_023945ec & (uint)auVar27._12_4_ | _UNK_023945fc) + auVar27._12_4_;
      auVar25 = roundps(auVar24,auVar18,0xb);
      auVar28._0_8_ = g_02394dc8 & g_02390140;
      auVar28._8_8_ = 0;
      auVar19._0_8_ = ~g_02390140 & uVar16;
      auVar19._8_8_ = ~_UNK_02390148 & CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_01);
      auVar20._4_12_ = SUB1612(auVar19 | auVar28,4);
      auVar20._0_4_ = SUB164(auVar19 | auVar28,0) + (float)uVar16;
      auVar27 = roundss(auVar20,auVar20,0xb);
      auVar27 = insertps(auVar27,auVar26,0x10);
      (**(code **)((int64_t)&dylib_command_00001348.cmd + **(int64_t **)(this_ptr + 0x90)))
                (auVar25._0_4_,auVar27._0_8_);
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar7 = 1;
      FUN_00d50b20();
      goto LAB_0024517c;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0024517c:
  if (local_88 == (int64_t *)0x0) {
    return uVar7;
  }
  FUN_00d50b20();
  return uVar7;
}



// ============================================================
// 002457d0
// ============================================================
// Function: FUN_002457d0
// Address: 002457d0
// Size: 1706 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


uint64_t FUN_002457d0(void)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *plVar6;
  int64_t **pplVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa_01;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  bool local_48;
  int64_t *local_40;
  char local_38;
  
  cVar2 = FUN_00245720();
  if (cVar2 == '\0') {
    uVar5 = 0;
    goto LAB_00245c0e;
  }
  pplVar7 = &local_50;
  FUN_01d384d0();
  local_78 = local_50;
  local_70 = 0;
  if (local_48 == false) {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_0010f8e0();
  if (cVar2 == '\0') {
LAB_00245bd2:
    local_88 = *arg1;
    local_80 = '\0';
    uVar3 = FUN_01e56e20();
    uVar5 = (uint64_t)uVar3;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0010db00();
    local_58 = local_40;
    plVar6 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), plVar6 = local_58, local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)plVar6 + 0xc) == 0) {
LAB_00245bca:
      FUN_00d50b20();
      goto LAB_00245bd2;
    }
    FUN_00d23310();
    plVar6 = local_40;
    bVar8 = local_38 == '\0';
    local_50 = local_40;
    if (bVar8) {
      local_48 = false;
    }
    else {
      local_48 = true;
      local_38 = '\0';
    }
    local_48 = !bVar8;
    if ((g_026d8478 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_0024598f:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0024598f;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      uVar9 = FUN_00d23310();
      plVar6 = local_40;
      bVar8 = local_38 == '\0';
      local_50 = local_40;
      if (bVar8) {
        local_48 = false;
      }
      else {
        local_48 = true;
        local_38 = '\0';
      }
      local_48 = !bVar8;
      if ((g_026fdd40 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Qa_01, iVar4 != 0)) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar9 = extraout_XMM0_Qa;
        if (cVar2 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = 0;
            ram_00000000026d5e68 = 0;
            g_026d5e70 = 0;
            ram_00000000026d5e78 = 0;
            g_026d5e80 = 0;
            ram_00000000026d5e88 = 0;
            g_026d5e90 = 0;
            ram_00000000026d5e98 = 0;
            g_026d5ea0 = 0;
            ram_00000000026d5ea8 = 0;
            g_026d5eb0 = 0;
            ram_00000000026d5eb8 = 0;
            g_026d5ec0 = 0;
            ram_00000000026d5ec8 = 0;
            g_026d5ed0 = 0;
            ram_00000000026d5ed8 = 0;
            g_026d5ee0 = 0;
            ram_00000000026d5ee8 = 0;
            g_026d5ef0 = 0;
            ram_00000000026d5ef8 = 0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar2 = FUN_00e8db60();
          uVar9 = extraout_XMM0_Qa_00;
          if (cVar2 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
          else {
            pplVar7 = &local_50;
          }
        }
      }
      plVar6 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar6 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar1 = g_026f6ee0;
      local_68 = plVar6;
      if (g_026f6ee0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_000175c0(uVar9,&local_98);
      plVar6 = local_40;
      FUN_00053ac0();
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        FUN_00e85ea0();
      }
      plVar10 = (int64_t *)FUN_00d45bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar6 = local_68;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = (int64_t *)FUN_00b7a6e0();
      FUN_00d50b20();
      plVar10 = local_68;
    }
    if ((double)plVar10 <= 0.0) goto LAB_00245bca;
    uVar5 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00245c0e:
  return uVar5 & 0xffffffff;
}



// ============================================================
// 0010f8e0
// ============================================================
// Function: FUN_0010f8e0
// Address: 0010f8e0
// Size: 1627 bytes
// Class: GNSoundFile
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


uint64_t FUN_0010f8e0(void)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  void*puVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = g_026fcec0;
  if (g_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e92b0;
  if ((plVar5 == (int64_t *)0x0) || (plVar7 = plVar5, *(int *)((int64_t)plVar5 + 0xc) == 0)) {
    if (g_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar7 = local_48;
    if (plVar5 == local_48) {
LAB_0010fa20:
      plVar7 = plVar5;
      if (local_40[0] != '\0') {
LAB_0010fa26:
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar5 = plVar7;
          goto LAB_0010fa20;
        }
        if (local_40[0] == '\0') goto LAB_0010fa34;
        goto LAB_0010fa26;
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010fa34:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_0010ff27;
  }
  if (*(int *)((int64_t)plVar7 + 0xc) < 1) {
LAB_0010ff1d:
    uVar6 = 0;
  }
  else {
    FUN_01f27fe0();
    FUN_00d23310();
    plVar5 = local_48;
    local_38[0] = local_40[0];
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_88 = '\x01';
    local_90 = plVar5;
    FUN_002a0320();
    plVar5 = (int64_t *)CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((plVar5 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      local_60 = plVar5;
      FUN_00d23310();
      plVar5 = local_48;
      local_a0 = local_40[0];
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_a0;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x370))();
      plVar5 = (int64_t *)CONCAT71(uStack_57,local_58);
      FUN_014ffc90();
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      cVar2 = (**(code **)(*plVar5 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_a0 != '\0') {
        FUN_00d50b20();
      }
      plVar5 = local_60;
      if (cVar2 == '\0') {
LAB_0010fe3f:
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_024c5080;
        FUN_00d500e0();
        FUN_00d23310();
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = &local_58;
        }
        local_58 = local_40[0];
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00b70580();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto joined_r0x0010ff0c;
      }
      FUN_00d23310();
      plVar7 = local_48;
      pcVar3 = &local_a0;
      if (local_40[0] != '\0') {
        pcVar3 = local_40;
      }
      local_a0 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = 0;
      if (local_a0 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      local_70 = plVar7;
      FUN_01500300();
      plVar7 = (int64_t *)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (((plVar7 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) goto LAB_0010fe3f;
      local_40[0] = '\0';
      local_48 = plVar7;
      cVar2 = FUN_00d23d70();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
LAB_0010fe37:
        FUN_00d50b20();
        goto LAB_0010fe3f;
      }
      FUN_01f27fe0();
      FUN_002a0320();
      if (local_48 != (int64_t *)0x0) {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0010fe37;
      }
      cVar2 = '\x01';
      FUN_00d50b20();
LAB_0010ff0e:
      FUN_00d50b20();
    }
    else {
      cVar2 = '\x01';
joined_r0x0010ff0c:
      if (plVar5 != (int64_t *)0x0) goto LAB_0010ff0e;
    }
    uVar6 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    if (cVar2 == '\0') goto LAB_0010ff1d;
  }
  FUN_00d50b20();
LAB_0010ff27:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 0010f410
// ============================================================
// Function: FUN_0010f410
// Address: 0010f410
// Size: 758 bytes
// Class: GNSoundFile
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void FUN_0010f410(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  void*this_ptr;
  int64_t *plVar5;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = g_026fcec0;
  if (g_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e92b0;
  if ((plVar2 == (int64_t *)0x0) || (plVar5 = plVar2, *(int *)((int64_t)plVar2 + 0xc) == 0)) {
    if (g_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar5 = local_48;
    if (plVar2 == local_48) {
LAB_0010f538:
      plVar5 = plVar2;
      if (local_40[0] != '\0') {
LAB_0010f53e:
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar2 = plVar5;
          goto LAB_0010f538;
        }
        if (local_40[0] == '\0') goto LAB_0010f54c;
        goto LAB_0010f53e;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010f54c:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (0 < *(int *)((int64_t)plVar5 + 0xc)) {
    FUN_00d23310();
    plVar2 = local_48;
    local_38[0] = local_40[0];
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x370))();
    plVar2 = (int64_t *)CONCAT71(uStack_67,local_68);
    FUN_017a52b0();
    local_58 = local_48;
    local_50 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_68 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_0010f6da;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0010f6da:
  FUN_00d50b20();
  return;
}



// ============================================================
// 007b1940
// ============================================================
// Function: FUN_007b1940
// Address: 007b1940
// Size: 1030 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNAudioSampleFormat"
//   "_sampleFormat"
//   "=GNAudioInvalidSampleFormat"
//   "=GNAudioPCM16IntMSB"
//   "=GNAudioPCM24IntMSB"
//   "=GNAudioPCM32IntMSB"
//   "=GNAudioPCM32FloatMSB"
//   "=GNAudioPCM64FloatMSB"
//   "=GNAudioPCM32IntMSB16"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void* FUN_007b1940(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (g_026e3100 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      g_026e3080 = -(uint)(*g_026e2f80 == '=');
      uVar3 = (uint)(*g_026e2f80 != '=');
      g_026e3084 = 0;
      if (*g_026e2f88 != '=') {
        g_026e3084 = uVar3;
      }
      iVar2 = g_026e3084 + 1;
      g_026e3088 = 1;
      if (*g_026e2f90 != '=') {
        g_026e3088 = iVar2;
      }
      iVar6 = g_026e3088 + 1;
      g_026e308c = 2;
      if (*g_026e2f98 != '=') {
        g_026e308c = iVar6;
      }
      iVar8 = g_026e308c + 1;
      g_026e3090 = 3;
      if (*g_026e2fa0 != '=') {
        g_026e3090 = iVar8;
      }
      iVar7 = g_026e3090 + 1;
      g_026e3094 = 4;
      if (*g_026e2fa8 != '=') {
        g_026e3094 = iVar7;
      }
      iVar5 = g_026e3094 + 1;
      g_026e3098 = 8;
      if (*g_026e2fb0 != '=') {
        g_026e3098 = iVar5;
      }
      iVar4 = g_026e3098 + 1;
      bVar1 = FUN_00136020(9,iVar4,10,0xb,0x14,0x18,0x19,0x1a,0x1b,0x40,0x41,0x42,0x43,0x44,0x45);
      g_026e30f8 = g_026e3084 == uVar3 &
                     (g_026e3088 == iVar2 &&
                     (g_026e308c == iVar6 &&
                     (g_026e3090 == iVar8 && (g_026e3094 == iVar7 && g_026e3098 == iVar5)))) &
                     bVar1 & g_026e309c == iVar4;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0272b7e8 = "_sampleFormat";
      g_0272b7f0 = &g_026f9340;
      g_0272b7f8 = 0;
      g_0272b800 = 0x6500;
      g_0272b808 = "GNAudioSampleFormat";
      g_0272b810 = &g_026e3108;
      g_0272b818 = 0;
      ram_000000000272b820 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0272b7e8;
}



// ============================================================
// 007b0440
// ============================================================
// Function: FUN_007b0440
// Address: 007b0440
// Size: 1992 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void FUN_007b0440(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02540e88;
  FUN_007b0d60();
  FUN_007b1080();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b13a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b1530();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b17b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b1940();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b1d70();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b1f00();
    FUN_00e87980();
  }
  FUN_007b2090();
  FUN_007b2350();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f93fb == '\0') {
    FUN_007b2680();
    FUN_00e87980();
  }
  FUN_007b28d0();
  FUN_007b2c00();
  FUN_007b2ec0();
  FUN_007b31f0();
  FUN_007b3520();
  FUN_007b3850();
  FUN_007b3b80();
  FUN_007b3eb0();
  return;
}



// ============================================================
// 007b2680
// ============================================================
// Function: FUN_007b2680
// Address: 007b2680
// Size: 550 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNSoundFileLayout"
//   "_fileLayout"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void* FUN_007b2680(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0272b950 = "_fileLayout";
      g_0272b958 = &g_026f9340;
      g_0272b960 = 0;
      g_0272b968 = 0x6500;
      g_0272b970 = "GNSoundFileLayout";
      g_0272b978 = &g_0272b9d0;
      g_0272b980 = 0;
      ram_000000000272b988 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0272b950;
}



// ============================================================
// 007b1530
// ============================================================
// Function: FUN_007b1530
// Address: 007b1530
// Size: 599 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNSoundFileFormat"
//   "_format"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void* FUN_007b1530(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0272b758 = "_format";
      g_0272b760 = &g_026f9340;
      g_0272b768 = 0;
      g_0272b770 = 0x6500;
      g_0272b778 = "GNSoundFileFormat";
      g_0272b780 = &g_026e1e08;
      g_0272b788 = 0;
      ram_000000000272b790 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0272b758;
}

