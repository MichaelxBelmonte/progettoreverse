// Function: FUN_0031f210
// Address: 0031f210
// Size: 11450 bytes
// Class: MURelativeTimeProgressor


/* WARNING: Removing unreachable block (ram,0x0031fe4d) */
/* WARNING: Removing unreachable block (ram,0x0031fe59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031f210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  pthread_key_t pVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  float fVar24;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  float local_108;
  float local_104;
  longlong *local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  longlong *local_e0;
  uint local_d8;
  float local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  float local_b4;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0 [8];
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  char local_60;
  char local_58 [8];
  longlong *local_50;
  char local_48 [8];
  float local_40;
  char local_38 [8];
  
  FUN_00324f60();
  plVar18 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_90 == (longlong *)0x0) {
    return;
  }
  local_100 = plVar18;
  (**(code **)(*plVar18 + 0x480))();
  local_c0 = local_90;
  if (local_90 == (longlong *)0x0) {
    bVar1 = true;
    local_c0 = (longlong *)0x0;
  }
  else {
    plVar18 = local_90;
    if (((local_88 == '\0') && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    pVar14 = (pthread_key_t)plVar18;
    FUN_01f27fe0();
    uVar3 = (**(code **)(*local_90 + 0x450))();
    local_c8 = (longlong *)CONCAT71(local_c8._1_7_,uVar3);
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00757c60();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    local_b0 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
         (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = (pthread_key_t)local_b0;
    }
    FUN_012e6160();
    local_f8 = local_50;
    local_f0 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_f0 = '\x01';
    FUN_003231a0();
    local_a8 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
         (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_c8 != '\0') && (local_a8 != (longlong *)0x0)) {
      local_88 = '\0';
      local_90 = (longlong *)0x0;
      local_80 = local_a8;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_78._4_4_ = 0;
      iVar22 = 0;
      while( true ) {
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar21 = -local_78._4_4_;
          }
          else {
            iVar21 = (int)local_78 - local_78._4_4_;
            local_78 = CONCAT44(local_78._4_4_,iVar21);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar21 = 0;
          }
          local_78 = CONCAT44(iVar21,(int)local_78);
        }
        lVar10 = (longlong)(int)local_78;
        iVar21 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar21);
        if (*(int *)((longlong)local_80 + 0xc) <= iVar21) break;
        local_90 = *(longlong **)(local_80[2] + 8 + lVar10 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)local_80[2]);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar22 = iVar22 + *(int *)((longlong)local_50 + 0xc);
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar18 = local_80;
      FUN_000be170();
      pVar14 = (pthread_key_t)plVar18;
      if (0 < iVar22) {
        FUN_00323290();
        plVar18 = local_90;
        if ((((local_88 == '\0') && (local_90 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_88 != '\0')) && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_88 = 0;
        local_90 = (longlong *)0x0;
        local_80 = local_a8;
        local_78 = 0xffffffff;
        local_70 = 0;
        local_78._4_4_ = 0;
        while( true ) {
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar22 = -local_78._4_4_;
            }
            else {
              iVar22 = (int)local_78 - local_78._4_4_;
              local_78 = CONCAT44(local_78._4_4_,iVar22);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar22 = 0;
            }
            local_78 = CONCAT44(iVar22,(int)local_78);
          }
          lVar10 = (longlong)(int)local_78;
          iVar22 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar22);
          if (*(int *)((longlong)local_80 + 0xc) <= iVar22) break;
          local_90 = *(longlong **)(local_80[2] + 8 + lVar10 * 8);
          pvVar9 = _pthread_getspecific((pthread_key_t)local_80[2]);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar23 = FUN_012e6160();
          plVar19 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_50 = plVar19;
          local_48[0] = '\0';
          FUN_00d214d0(uVar23,*(undefined4 *)((longlong)plVar18 + 0xc));
          if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar19 = local_80;
        FUN_000be170();
        pVar14 = (pthread_key_t)plVar19;
        local_88 = '\0';
        local_90 = plVar18;
        FUN_00d214d0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar18 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    iVar22 = FUN_00325000();
    if (iVar22 == 1) {
      pvVar9 = _pthread_getspecific(pVar14);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar14 = (pthread_key_t)local_b0;
      }
      FUN_012e6160();
      FUN_00323290();
      local_e8 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
           (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar14);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar14 = (pthread_key_t)local_b0;
      }
      FUN_012e6160();
      FUN_00323290();
      local_e0 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
           (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00db3260();
      (**(code **)(*local_100 + 0x628))();
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a5250();
      FUN_004405c0();
      local_d0 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
           (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_b4 = (float)FUN_004b8660();
      if (local_a8 != (longlong *)0x0) {
        local_88 = 0;
        local_90 = (longlong *)0x0;
        local_80 = local_a8;
        local_78._0_4_ = -1;
        local_78._4_4_ = 0;
        local_70 = 0;
        local_40 = DAT_02390d00;
        local_d8 = 0;
        while( true ) {
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              local_78._4_4_ = -local_78._4_4_;
            }
            else {
              local_78._0_4_ = (int)local_78 - local_78._4_4_;
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              local_78._4_4_ = 0;
            }
          }
          lVar10 = (longlong)(int)local_78;
          local_78._0_4_ = (int)local_78 + 1;
          if (*(int *)((longlong)local_80 + 0xc) <= (int)local_78) break;
          local_90 = *(longlong **)(local_80[2] + 8 + lVar10 * 8);
          uVar23 = FUN_004f9670();
          plVar18 = local_50;
          local_38[0] = local_48[0];
          pcVar12 = local_48;
          if (local_48[0] == '\0') {
            pcVar12 = local_38;
          }
          *pcVar12 = '\0';
          if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          local_178 = local_90;
          local_170 = '\0';
          FUN_004b8020(uVar23,&local_178);
          plVar19 = local_50;
          local_58[0] = local_48[0];
          pcVar12 = local_58;
          pcVar13 = local_48;
          if (local_48[0] == '\0') {
            pcVar13 = pcVar12;
          }
          *pcVar13 = '\0';
          if ((local_48[0] != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)pcVar12;
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar19 != (longlong *)0x0) &&
             ((cVar4 = FUN_003b7780(), cVar4 != '\0' || (cVar4 = FUN_003b7710(), cVar4 != '\0')))) {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar24 = (float)FUN_004f7a80();
            if (local_40 < fVar24) {
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = (float)FUN_004f7a80();
            }
          }
          pvVar9 = _pthread_getspecific(pVar14);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_004f78f0();
          if (cVar4 != '\0') {
            local_98 = plVar18;
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            plVar18 = local_50;
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 == local_b0) {
              local_50 = local_90;
              local_48[0] = '\0';
              uVar11 = FUN_00d235a0();
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                uVar11 = FUN_00d50b20();
              }
              local_d8 = (uint)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
              plVar18 = local_98;
            }
            else {
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
              plVar2 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_50 = plVar2;
              local_48[0] = '\0';
              uVar11 = FUN_00d235a0();
              plVar18 = local_98;
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                uVar11 = FUN_00d50b20();
              }
              if (plVar2 != (longlong *)0x0) {
                uVar11 = FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                uVar11 = FUN_00d50b20();
              }
              local_d8 = (uint)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
            }
          }
          if ((local_58[0] != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_000be170();
        if (local_b4 <= 0.0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_80 = local_a8;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_b4 = local_b4 + DAT_02390124;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar22 = -local_78._4_4_;
              }
              else {
                iVar22 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar22);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar22 = 0;
              }
              local_78 = CONCAT44(iVar22,(int)local_78);
            }
            lVar10 = (longlong)(int)local_78;
            iVar22 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar22);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar22) break;
            local_168 = *(longlong **)(local_80[2] + 8 + lVar10 * 8);
            local_160 = '\0';
            local_90 = local_168;
            uVar23 = FUN_004f9670();
            plVar18 = local_50;
            local_38[0] = local_48[0];
            pcVar12 = local_48;
            if (local_48[0] == '\0') {
              pcVar12 = local_38;
            }
            *pcVar12 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            local_158 = local_90;
            local_150 = '\0';
            FUN_004b8020(uVar23,&local_158);
            plVar19 = local_50;
            local_58[0] = local_48[0];
            pcVar12 = local_58;
            pcVar13 = local_48;
            if (local_48[0] == '\0') {
              pcVar13 = pcVar12;
            }
            *pcVar13 = '\0';
            if ((local_48[0] != '\0') && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar14 = (pthread_key_t)pcVar12;
            if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 == (longlong *)0x0) {
LAB_00321ad0:
              if ((char)local_c8 == '\0') {
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
              }
              else {
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_98 = plVar18;
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6160();
                FUN_012f4a00();
                plVar18 = local_98;
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  plVar18 = local_98;
                }
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f4a50();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7d10();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011f2610();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004f7a80();
              FUN_012a4680();
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              cVar4 = FUN_003b7780();
              cVar5 = FUN_003b7710();
              if (cVar4 == '\0' && cVar5 == '\0') goto LAB_00321ad0;
              pVar14 = 0x2802558;
              if (cVar5 == '\0') {
                pvVar9 = _pthread_getspecific(0x2802558);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a50();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00323330(local_40,local_b4);
                FUN_012a4680();
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar9 = _pthread_getspecific(0x2802558);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a50();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00323330(local_40,DAT_02390124);
                FUN_012a4680();
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if ((local_58[0] != '\0') && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_80 = local_a8;
          local_78 = 0xffffffff;
          local_104 = local_b4 / _DAT_023b2570 + DAT_02390124;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar22 = -local_78._4_4_;
              }
              else {
                iVar22 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar22);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar22 = 0;
              }
              local_78 = CONCAT44(iVar22,(int)local_78);
            }
            lVar10 = (longlong)(int)local_78;
            iVar22 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar22);
            if (*(int *)((longlong)local_80 + 0xc) <= iVar22) break;
            local_148 = *(longlong **)(local_80[2] + 8 + lVar10 * 8);
            local_140 = '\0';
            local_90 = local_148;
            uVar23 = FUN_004f9670();
            plVar18 = local_50;
            local_38[0] = local_48[0];
            pcVar12 = local_48;
            if (local_48[0] == '\0') {
              pcVar12 = local_38;
            }
            *pcVar12 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
              uVar23 = FUN_00d50b20();
            }
            local_138 = local_90;
            local_130 = '\0';
            FUN_004b8020(uVar23,&local_138);
            plVar19 = local_50;
            local_58[0] = local_48[0];
            pcVar12 = local_58;
            pcVar13 = local_48;
            if (local_48[0] == '\0') {
              pcVar13 = pcVar12;
            }
            *pcVar13 = '\0';
            if ((local_48[0] != '\0') && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar14 = (pthread_key_t)pcVar12;
            local_c8 = plVar19;
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_c8 == (longlong *)0x0) {
              cVar4 = '\0';
              cVar5 = '\0';
            }
            else {
              cVar4 = FUN_003b7780();
              cVar5 = FUN_003b7710();
            }
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar6 = FUN_004f7980();
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            if (local_68 == local_b0) {
              local_48[0] = '\0';
              local_50 = (longlong *)0x0;
            }
            else {
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
            }
            pcVar12 = local_48;
            if (local_48[0] == '\0') {
              pcVar12 = local_a0;
            }
            local_a0[0] = local_48[0];
            local_98 = local_50;
            *pcVar12 = '\0';
            if ((local_48[0] != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_50 = local_90;
            local_48[0] = '\0';
            bVar7 = FUN_00d24090();
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar19 = local_98;
            bVar20 = ~bVar7 & bVar6;
            uVar15 = (uint)bVar20;
            uVar17 = (uint)bVar20;
            uVar16 = (uint)bVar20;
            if ((bVar7 == 0 && bVar6 == 0) && (bVar20 = bVar6, (local_d8 & 1) != 0)) {
              uVar17 = uVar15;
              pvVar9 = _pthread_getspecific(uVar16);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar8 = FUN_004f78f0();
              if (cVar8 == '\0') {
                if (plVar19 == (longlong *)0x0) {
                  bVar20 = 1;
                }
                else {
                  local_50 = plVar19;
                  local_48[0] = '\0';
                  bVar20 = FUN_00d24090();
                  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  bVar20 = bVar20 ^ 1;
                }
                goto LAB_003205c0;
              }
              if (cVar4 == '\0' && cVar5 == '\0') {
LAB_00320930:
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a50();
                if (plVar19 != (longlong *)0x0) {
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7d10();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011f2610();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_004f7a80();
                  FUN_012a4680();
                  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00320eb0;
                }
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar24 = (float)FUN_004f7a80();
                FUN_012a4680(fVar24 * local_b4);
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
LAB_00320b20:
                local_d4 = (float)FUN_00323330(local_40,DAT_02390124);
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_108 = (float)FUN_004f7a80();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a50();
                if (plVar19 != (longlong *)0x0) {
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7d10();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011f2610();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_004f7a80();
                  FUN_012a4680();
                  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00320eb0;
                }
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012a4680((local_108 - local_d4) * local_b4 + local_d4);
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
LAB_003205c0:
              if ((bVar20 == 1 && cVar4 == '\0') && cVar5 == '\0') {
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a50();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(uVar17);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_004f7a80();
                FUN_012a4680();
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if ((cVar4 == '\0' && bVar20 == 0) && cVar5 == '\0') goto LAB_00320930;
                if (bVar20 == 0) goto LAB_00320b20;
                if (local_b4 <= DAT_02391094) {
                  local_d4 = (float)FUN_00323330(local_40,local_104,param_3,param_4,plVar18,0);
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a00();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a50();
                  if (plVar19 == (longlong *)0x0) {
                    pvVar9 = _pthread_getspecific(uVar17);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e7d10();
                    pvVar9 = _pthread_getspecific(uVar17);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_011f2610();
                    pvVar9 = _pthread_getspecific(uVar17);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012a4680(local_d4);
                    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_00320ec6;
                  }
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7d10();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011f2610();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_004f7a80();
                  FUN_012a4680();
                  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a00();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a50();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7d10();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011f2610();
                  pvVar9 = _pthread_getspecific(uVar17);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012a4680(DAT_02390d00);
                  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
LAB_00320eb0:
              if ((local_a0[0] != '\0') && (plVar19 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_00320ec6:
            if ((local_58[0] != '\0') && (local_c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_000be170();
      }
      FUN_00db3270();
      if (local_d0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_e0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      iVar22 = FUN_00325000();
      if (iVar22 == 0) {
        FUN_00db3260();
        if (local_a8 != (longlong *)0x0) {
          local_88 = '\0';
          local_90 = (longlong *)0x0;
          local_80 = local_a8;
          local_70 = 0;
          local_78 = 0;
          if (0 < *(int *)((longlong)local_a8 + 0xc)) {
            lVar10 = 0;
            do {
              local_128 = *(longlong **)(local_a8[2] + lVar10 * 8);
              local_120 = '\0';
              local_90 = local_128;
              FUN_004f9670();
              plVar18 = local_50;
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar13 = local_48;
              if (local_48[0] == '\0') {
                pcVar13 = pcVar12;
              }
              *pcVar13 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pVar14 = (pthread_key_t)pcVar12;
              if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004f7980();
              FUN_012f4a00();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004f78f0();
              FUN_012f4a50();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7d10();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011f2610();
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar9 = _pthread_getspecific(pVar14);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004f7a80();
              FUN_012a4680();
              if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + 1;
              local_78 = CONCAT44(local_78._4_4_,(int)lVar10);
            } while ((int)lVar10 < *(int *)((longlong)local_a8 + 0xc));
          }
          FUN_000be170();
        }
        FUN_00db3270();
      }
      else {
        iVar22 = FUN_00325000();
        if (iVar22 == 2) {
          FUN_00db3260();
          if (local_a8 != (longlong *)0x0) {
            local_88 = '\0';
            local_90 = (longlong *)0x0;
            local_80 = local_a8;
            local_70 = 0;
            local_78 = 0;
            if (0 < *(int *)((longlong)local_a8 + 0xc)) {
              lVar10 = 0;
              do {
                local_118 = *(longlong **)(local_a8[2] + lVar10 * 8);
                local_110 = '\0';
                local_90 = local_118;
                FUN_004f9670();
                plVar18 = local_50;
                local_38[0] = local_48[0];
                pcVar12 = local_38;
                pcVar13 = local_48;
                if (local_48[0] == '\0') {
                  pcVar13 = pcVar12;
                }
                *pcVar13 = '\0';
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pVar14 = (pthread_key_t)pcVar12;
                if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_004f7980();
                FUN_012f4a00();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_004f78f0();
                FUN_012f4a50();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7d10();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011f2610();
                pvVar9 = _pthread_getspecific(pVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012a4680(DAT_02390124);
                if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (plVar18 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar10 = lVar10 + 1;
                local_78 = CONCAT44(local_78._4_4_,(int)lVar10);
              } while ((int)lVar10 < *(int *)((longlong)local_a8 + 0xc));
            }
            FUN_000be170();
          }
          FUN_00db3270();
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_b0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
  FUN_00d50b20();
  if (!bVar1 && local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


