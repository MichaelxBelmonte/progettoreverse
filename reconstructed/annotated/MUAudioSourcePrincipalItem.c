// ===== MUAudioSourcePrincipalItem — Annotated small functions =====
// 48 readable functions

// ==================================================
// @014d26c0 (2940 bytes) — math_loop

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong *plVar14;
  int iVar15;
  longlong *this;
  longlong *plVar16;
  undefined7 uVar18;
  ulonglong uVar17;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  int local_98;
  float local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  longlong *local_38;
  
  (**(code **)(*this + 0x378))();
  plVar4 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) {
    return;
  }
  local_80 = plVar4;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  plVar4 = local_78;
  if ((((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this + 1000))();
  if (cVar5 == '\0') goto LAB_014d3176;
  FUN_014bc340();
  local_88 = local_78;
  if (((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && (local_78 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_014bc420();
  local_90 = local_78;
  if (((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && (local_78 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this + 1000))();
  local_98 = -1;
  if ((cVar5 != '\0') && (lVar8 = **(longlong **)(this[0x21] + 0x10), lVar8 != 0)) {
    FUN_00d50b00();
    local_98 = *(int *)(lVar8 + 0xc);
    FUN_00d50b20();
  }
  iVar6 = FUN_014c2f80();
  local_94 = (float)(**(code **)(*this + 0x3e0))();
  cVar5 = (**(code **)(*this + 1000))();
  if ((cVar5 != '\0') && (**(longlong **)(this[0x21] + 0x10) != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this + 1000))();
  if (cVar5 != '\0') {
    FUN_00d23340();
    plVar12 = local_78;
    pcVar13 = &local_a8;
    if (local_70[0] != '\0') {
      pcVar13 = local_70;
    }
    local_a8 = local_70[0];
    *pcVar13 = '\0';
    if ((local_70[0] != '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 == '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar4 == (longlong *)0x0) {
    local_50 = 0;
    local_40 = 0;
    local_48 = (longlong *)0x0;
    bVar2 = true;
LAB_014d30af:
    bVar1 = 1;
    local_38 = (longlong *)0x0;
  }
  else {
    local_98 = local_98 + -1;
    local_70[0] = '\0';
    local_78 = (longlong *)0x0;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    local_38 = (longlong *)0x0;
    local_40 = 0;
    local_48 = (longlong *)0x0;
    local_60._4_4_ = 0;
    fVar19 = DAT_0241fd58;
    fVar21 = DAT_0241fd58;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar15 = -local_60._4_4_;
        }
        else {
          iVar15 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar15);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar15 = 0;
        }
        local_60 = CONCAT44(iVar15,(int)local_60);
      }
      lVar8 = (longlong)(int)local_60;
      iVar15 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar15);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar15) break;
      plVar12 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
      local_78 = plVar12;
      if ((DAT_027c0170 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar11 = &local_78;
        if (cVar5 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      plVar12 = *pplVar11;
      if ((plVar12 != (longlong *)0x0) && (plVar12 != this)) {
        pvVar7 = _pthread_getspecific((pthread_key_t)pplVar11);
        pVar10 = (pthread_key_t)pplVar11;
        plVar14 = plVar12;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        cVar5 = (**(code **)(*plVar14 + 1000))();
        uVar17 = local_40;
        plVar14 = local_48;
        if (cVar5 != '\0') {
          if (local_88 == (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            if (CONCAT71(uStack_a7,local_a8) == 0) {
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar15 = FUN_014c2f80();
              if (iVar15 != local_98) goto LAB_014d2be3;
              pvVar7 = _pthread_getspecific(pVar10);
              plVar16 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar16 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar20 = (float)(**(code **)(*plVar16 + 0x3e0))();
              if (fVar19 <= (float)((uint)(fVar20 - local_94) & _DAT_02390140)) goto LAB_014d2be3;
              bVar3 = true;
              bVar2 = true;
            }
            else {
LAB_014d2be3:
              bVar3 = false;
              bVar2 = false;
            }
            if ((local_a0 != '\0') && (bVar2 = bVar3, CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar16 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar16 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar19 = (float)(**(code **)(*plVar16 + 0x3e0))();
              fVar19 = (float)((uint)(fVar19 - local_94) & _DAT_02390140);
              uVar18 = (undefined7)(uVar17 >> 8);
              cVar5 = (char)uVar17;
              if (plVar12 == plVar14) {
                if (cVar5 == '\0') {
                  uVar17 = CONCAT71(uVar18,1);
                  FUN_00d50b00();
                }
              }
              else {
                FUN_00d50b00();
                uVar17 = CONCAT71(uVar18,1);
                if ((cVar5 == '\0') || (local_48 == (longlong *)0x0)) {
                  local_48 = plVar12;
                }
                else {
                  FUN_00d50b20();
                  local_48 = plVar12;
                }
              }
            }
          }
          else {
            uVar17 = local_40 & 0xffffffff;
          }
          if (local_90 == (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc340();
            if (CONCAT71(uStack_a7,local_a8) == 0) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              cVar5 = (**(code **)(*plVar14 + 1000))();
              iVar15 = -1;
              if ((cVar5 != '\0') && (lVar8 = **(longlong **)(plVar14[0x21] + 0x10), lVar8 != 0)) {
                FUN_00d50b00();
                iVar15 = *(int *)(lVar8 + 0xc);
                FUN_00d50b20();
              }
              if (iVar15 != iVar6 + 1) goto LAB_014d2ddd;
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar20 = (float)(**(code **)(*plVar14 + 0x3e0))();
              if (fVar21 <= (float)((uint)(fVar20 - local_94) & _DAT_02390140)) goto LAB_014d2ddd;
              bVar3 = true;
              bVar2 = true;
            }
            else {
LAB_014d2ddd:
              bVar3 = false;
              bVar2 = false;
            }
            if ((local_a0 != '\0') && (bVar2 = bVar3, CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              uVar9 = (**(code **)(*plVar14 + 0x3e0))();
              fVar21 = (float)((uint)(extraout_XMM0_Da - local_94) & _DAT_02390140);
              if (plVar12 == local_38) {
                if ((char)local_50 == '\0') {
                  local_50 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                uVar9 = FUN_00d50b00();
                if (((char)local_50 != '\0') && (local_38 != (longlong *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
                local_50 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                local_38 = plVar12;
              }
            }
          }
          local_40 = uVar17 & 0xffffffff;
        }
      }
    }
    plVar12 = local_68;
    FUN_01481520();
    pVar10 = (pthread_key_t)plVar12;
    bVar2 = true;
    if (local_48 != (longlong *)0x0) {
      cVar5 = FUN_014d36f0();
      pVar10 = (pthread_key_t)plVar12;
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar12 = local_48;
        }
        pVar10 = (pthread_key_t)plVar12;
        if (this != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_014bc360();
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_014bc2e0();
        bVar2 = false;
      }
    }
    if (local_38 == (longlong *)0x0) goto LAB_014d30af;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar10 = (pthread_key_t)local_38;
    }
    if (this != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = FUN_014d36f0();
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      bVar1 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_014bc2e0();
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_014bc360();
      bVar1 = 0;
    }
  }
  plVar12 = local_88;
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!(bool)((char)local_50 == '\0' | bVar1)) {
    FUN_00d50b20();
  }
  if ((char)local_40 != '\0' && !bVar2) {
    FUN_00d50b20();
  }
LAB_014d3176:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01364f70 (2760 bytes) — math_loop

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *arg1;
  longlong this;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  bool bVar16;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148;
  longlong *local_140;
  undefined1 local_138;
  undefined8 *local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined1 local_110 [4];
  int iStack_10c;
  longlong *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  uint local_d4;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  char local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  uint local_54;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  local_90 = puVar4;
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  puVar7 = (undefined *)*arg1;
  local_88 = puVar4;
  if (puVar7 == (undefined *)0x0) {
    local_48 = (undefined *)0x0;
    local_c0 = 0;
LAB_013650de:
    puVar7 = (undefined *)0x0;
    plVar14 = (longlong *)0x0;
    local_54 = 0;
    if (*(longlong *)(this + 0x1f8) == 0) goto LAB_0136577e;
LAB_01365790:
    cVar15 = (char)puVar7;
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') goto LAB_013657ec;
  }
  else {
    if ((*(int *)(puVar7 + 0xc) == 0) ||
       (lVar6 = *(longlong *)(**(longlong **)(puVar7 + 0x10) + 0x28), *(int *)(lVar6 + 0xc) == 0)) {
      local_48 = (undefined *)0x0;
      local_c0 = 0;
    }
    else {
      lVar13 = **(longlong **)(lVar6 + 0x10);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_01266fe0();
      local_48 = local_b8;
      puVar10 = local_b8;
      if (local_b8 == (undefined *)0x0) {
        local_48 = (undefined *)0x0;
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        if (((local_b0 == '\0') && (FUN_00d50b00(), local_b0 != '\0')) &&
           (local_b8 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar7 = (undefined *)*arg1;
      local_c0 = uVar8;
      if (puVar7 == (undefined *)0x0) goto LAB_013650de;
    }
    local_b0 = '\0';
    local_b8 = (undefined *)0x0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_d4 = param_2 & 0xff;
    local_38 = (undefined *)0x0;
    plVar14 = (longlong *)0x0;
    local_54 = 0;
    local_a0._4_4_ = 0;
    local_a8 = puVar7;
    while( true ) {
      puVar7 = local_38;
      if (local_a0._4_4_ != 0) {
        if (local_a0._4_4_ < 1) {
          iVar12 = -local_a0._4_4_;
        }
        else {
          iVar12 = (int)local_a0 - local_a0._4_4_;
          local_a0 = CONCAT44(local_a0._4_4_,iVar12);
          FUN_00d23690();
          local_98 = local_98 + local_a0._4_4_;
          iVar12 = 0;
        }
        local_a0 = CONCAT44(iVar12,(int)local_a0);
      }
      lVar6 = (longlong)(int)local_a0;
      iVar12 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar12);
      if (*(int *)(local_a8 + 0xc) <= iVar12) break;
      local_b8 = *(undefined **)(*(longlong *)(local_a8 + 0x10) + 8 + lVar6 * 8);
      local_39 = 0;
      lVar6 = *(longlong *)(local_b8 + 0x10);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_158 = 1;
      puVar10 = *(undefined **)(local_b8 + 0x20);
      local_160 = lVar6;
      uVar8 = FUN_0135f200(puVar10,&local_160,local_110,&local_39);
      plVar11 = local_80;
      cVar15 = (char)puVar7;
      if (local_80 == plVar14) {
        if ((cVar15 == '\0') && (local_80 != (longlong *)0x0)) {
          puVar10 = (undefined *)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
          puVar7 = puVar10;
          if (local_78 == '\0') {
            local_38 = puVar10;
            FUN_00d50b00();
            puVar7 = local_38;
          }
        }
        else if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01365716:
        pVar9 = (pthread_key_t)puVar10;
        local_38 = puVar7;
        plVar11 = plVar14;
      }
      else {
        if (local_78 == '\0') {
          if (local_80 != (longlong *)0x0) {
            uVar8 = FUN_00d50b00();
          }
          pVar9 = (pthread_key_t)puVar10;
          local_38 = (undefined *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          if (cVar15 == '\0') goto joined_r0x01365759;
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar14 = plVar11;
            puVar7 = local_38;
            goto joined_r0x01365716;
          }
        }
        else {
          local_38 = (undefined *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          if ((cVar15 != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar14 = plVar11;
            puVar7 = local_38;
            goto joined_r0x01365716;
          }
        }
        pVar9 = (pthread_key_t)puVar10;
      }
joined_r0x01365759:
      plVar14 = plVar11;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (plVar14 == (longlong *)0x0) {
LAB_01365170:
        *(undefined8 *)(local_b8 + 0x20) = 0xffffffffffffffff;
      }
      else {
        lVar6 = *(longlong *)(local_b8 + 0x10);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_148 = 1;
        local_150 = lVar6;
        FUN_01326e80();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_138 = 0;
        local_140 = plVar14;
        FUN_01326e80();
        if (iStack_10c < 1) goto LAB_01365170;
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar11 = local_80;
        pvVar5 = _pthread_getspecific(pVar9);
        plVar1 = local_80;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar11 = plVar1, lVar6 != 0)) {
          plVar11 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        uVar8 = (**(code **)(*plVar11 + 0x380))();
        *(undefined8 *)(local_b8 + 0x20) = uVar8;
        puVar10 = local_b8;
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (pthread_key_t)puVar10;
        local_f8 = local_90;
        local_f0 = '\0';
        FUN_015b4ee0();
        if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        lVar6 = *(longlong *)(local_b8 + 0x10);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\0';
        local_80 = (longlong *)lVar6;
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_78 = '\0';
        local_80 = plVar14;
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        bVar2 = local_39;
        bVar16 = local_80 != plVar14;
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_54 = local_54 & 0xff;
        if (bVar16 || (bVar2 & 1) != 0) {
          local_54 = 1;
        }
        if (local_48 != (undefined *)0x0) {
          pvVar5 = _pthread_getspecific(1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = '\0';
          local_e8 = plVar14;
          FUN_012eb1d0();
          plVar11 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            local_78 = '\0';
            local_80 = (longlong *)0x0;
            local_70 = plVar11;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar12 = -local_68._4_4_;
                }
                else {
                  iVar12 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar12);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar12 = 0;
                }
                local_68 = CONCAT44(iVar12,(int)local_68);
              }
              lVar6 = (longlong)(int)local_68;
              iVar12 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar12);
              if (*(int *)((longlong)local_70 + 0xc) <= iVar12) break;
              local_108 = *(longlong **)(local_70[2] + 8 + lVar6 * 8);
              local_100 = '\0';
              local_80 = local_108;
              FUN_00d235a0();
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
        }
      }
    }
    puVar10 = local_a8;
    FUN_01954b60();
    if (*(longlong *)(this + 0x1f8) != 0) goto LAB_01365790;
LAB_0136577e:
    cVar15 = (char)puVar7;
    if ((*(longlong *)(this + 0x200) != 0) || (*(longlong *)(this + 0x148) == 0))
    goto LAB_01365790;
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar12 = FUN_0141bab0();
    if (iVar12 != 3) goto LAB_01365790;
  }
  if (0xe < *(int *)(local_90 + 3) + 7U) {
    if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
       (*(longlong *)(this + 0x148) != 0)) {
      pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_0141bab0();
      if (iVar12 == 3) {
        if ((local_54 & 1) == 0) {
          if (0 < *(int *)((longlong)local_88 + 0xc)) {
            lVar6 = 0;
            do {
              pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              puVar7 = local_b8;
              if ((((local_b0 == '\0') && (local_b8 != (undefined *)0x0)) &&
                  (FUN_00d50b00(), local_b0 != '\0')) && (local_b8 != (undefined *)0x0)) {
                FUN_00d50b20();
              }
              local_38 = puVar7;
              pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = 0;
              FUN_00d50b00();
              local_c8 = '\x01';
              local_d0 = this;
              FUN_014d0690();
              puVar7 = local_38;
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if (puVar7 != (undefined *)0x0) {
                FUN_00d50b20();
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < *(int *)((longlong)local_88 + 0xc));
          }
        }
        else {
          local_130 = local_90;
          local_128 = 0;
          FUN_01353f80();
        }
        goto LAB_013657ec;
      }
    }
    local_120 = local_90;
    local_118 = 0;
    FUN_01353f80();
  }
LAB_013657ec:
  if (((char)local_c0 != '\0') && (local_48 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar15 != '\0') && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = local_90;
  if (local_88 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014d39b0 (2583 bytes) — math_loop

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  char in_CL;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *arg1;
  undefined8 *this;
  bool bVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  longlong *local_70;
  char local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int local_50;
  int local_40;
  int local_3c;
  longlong *local_38;
  
  cVar2 = (**(code **)(*arg1 + 1000))();
  if (cVar2 == '\0') {
LAB_014d3a35:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  if (in_CL == '\0') {
    FUN_014bc420();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_014bc340();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_70 != (longlong *)0x0) goto LAB_014d3a35;
  fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
  if (in_CL == '\0') {
    iVar3 = FUN_014c2f80();
    if (*param_2 == 0) goto LAB_014d43dc;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = *param_2;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    local_3c = 1000000;
    bVar11 = false;
    local_38 = (longlong *)0x0;
    fVar13 = extraout_XMM0_Da_07;
    while( true ) {
      lVar5 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      plVar10 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar5 * 8);
      local_70 = plVar10;
      if ((DAT_027c0170 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), fVar13 = extraout_XMM0_Da_14, iVar4 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        fVar13 = (float)___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_70;
        fVar13 = extraout_XMM0_Da_08;
        if (cVar2 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar8;
      if ((plVar10 != (longlong *)0x0) && (plVar10 != arg1)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
        pVar7 = (pthread_key_t)pplVar8;
        plVar9 = plVar10;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        cVar2 = (**(code **)(*plVar9 + 1000))();
        fVar13 = extraout_XMM0_Da_09;
        if (cVar2 != '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_014bc070();
          fVar13 = extraout_XMM0_Da_10;
          if (cVar2 == '\0') {
            pvVar6 = _pthread_getspecific(pVar7);
            plVar9 = plVar10;
            if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar2 = (**(code **)(*plVar9 + 1000))();
            iVar4 = -1;
            fVar13 = extraout_XMM0_Da_11;
            if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar9[0x21] + 0x10), lVar5 != 0)) {
              FUN_00d50b00();
              iVar4 = *(int *)(lVar5 + 0xc);
              fVar13 = (float)FUN_00d50b20();
            }
            if (iVar3 < iVar4) {
              pvVar6 = _pthread_getspecific(pVar7);
              plVar9 = plVar10;
              if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              cVar2 = (**(code **)(*plVar9 + 1000))();
              iVar4 = -1;
              fVar13 = extraout_XMM0_Da_12;
              if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar9[0x21] + 0x10), lVar5 != 0)) {
                FUN_00d50b00();
                iVar4 = *(int *)(lVar5 + 0xc);
                fVar13 = (float)FUN_00d50b20();
              }
              if (iVar4 - iVar3 < local_3c) {
                pvVar6 = _pthread_getspecific(pVar7);
                plVar9 = plVar10;
                if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                fVar13 = (float)(**(code **)(*plVar9 + 0x3e0))();
                fVar13 = (float)((uint)(fVar13 - fVar12) & _DAT_02390140);
                if (fVar13 < param_1) {
                  if (plVar10 == local_38) {
                    plVar9 = local_38;
                    bVar1 = bVar11;
                    if (!bVar11) {
                      FUN_00d50b00();
                      bVar1 = true;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    bVar1 = true;
                    plVar9 = plVar10;
                    if ((bVar11) && (local_38 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_38 = plVar9;
                  pvVar6 = _pthread_getspecific(pVar7);
                  if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                  }
                  cVar2 = (**(code **)(*plVar10 + 1000))();
                  local_3c = -1;
                  fVar13 = extraout_XMM0_Da_13;
                  if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar10[0x21] + 0x10), lVar5 != 0)
                     ) {
                    FUN_00d50b00();
                    local_3c = *(int *)(lVar5 + 0xc);
                    fVar13 = (float)FUN_00d50b20();
                  }
                  local_3c = local_3c - iVar3;
                  bVar11 = bVar1;
                }
              }
            }
          }
        }
      }
      iVar4 = iStack_54;
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          fVar13 = (float)FUN_00d23690(fVar13,iStack_54);
          local_50 = local_50 + iVar4;
          iStack_54 = 0;
        }
      }
    }
    lVar5 = local_60;
    FUN_01481520();
    if (local_38 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc340();
      plVar10 = local_70;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014d43c6;
    }
LAB_014d4379:
    local_38 = (longlong *)0x0;
LAB_014d43e5:
    *(undefined1 *)(this + 1) = 0;
    if (bVar11) goto LAB_014d43ff;
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_014d43ff;
    }
  }
  else {
    cVar2 = (**(code **)(*arg1 + 1000))();
    local_40 = -1;
    fVar13 = extraout_XMM0_Da;
    if ((cVar2 != '\0') && (lVar5 = **(longlong **)(arg1[0x21] + 0x10), lVar5 != 0)) {
      FUN_00d50b00();
      local_40 = *(int *)(lVar5 + 0xc);
      fVar13 = (float)FUN_00d50b20();
    }
    if (*param_2 != 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = *param_2;
      local_58 = -1;
      iStack_54 = 0;
      local_50 = 0;
      local_3c = 1000000;
      bVar11 = false;
      local_38 = (longlong *)0x0;
      while( true ) {
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(local_60 + 0xc) <= local_58) break;
        plVar10 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar5 * 8);
        local_70 = plVar10;
        if ((DAT_027c0170 == '\0') &&
           (iVar3 = ___cxa_guard_acquire(), fVar13 = extraout_XMM0_Da_06, iVar3 != 0)) {
          _DAT_02790158 = FUN_007ef2d0();
          _DAT_02790140 = "MUAudioSourcePrincipalItem";
          _DAT_02790148 = 0x138;
          _DAT_02790150 = FUN_010fe5c0;
          _DAT_02790160 = 0;
          uRam0000000002790168 = 0;
          _DAT_02790170 = 0;
          uRam0000000002790178 = 0;
          _DAT_02790180 = 0;
          uRam0000000002790188 = 0;
          _DAT_02790190 = 0;
          uRam0000000002790198 = 0;
          _DAT_027901a0 = 0;
          uRam00000000027901a8 = 0;
          _DAT_027901b0 = 0;
          uRam00000000027901b8 = 0;
          _DAT_027901c0 = 0;
          uRam00000000027901c8 = 0;
          _DAT_027901d0 = 0;
          uRam00000000027901d8 = 0;
          _DAT_027901e0 = 0;
          uRam00000000027901e8 = 0;
          _DAT_027901f0 = 0;
          uRam00000000027901f8 = 0;
          _DAT_02790200 = 0;
          fVar13 = (float)___cxa_guard_release();
        }
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar8 = &local_70;
          fVar13 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar10 = *pplVar8;
        if ((plVar10 != (longlong *)0x0) && (plVar10 != arg1)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
          pVar7 = (pthread_key_t)pplVar8;
          plVar9 = plVar10;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar9 + 1000))();
          fVar13 = extraout_XMM0_Da_01;
          if (cVar2 != '\0') {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            fVar13 = extraout_XMM0_Da_02;
            if (cVar2 == '\0') {
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_014c2f80();
              fVar13 = extraout_XMM0_Da_03;
              if (iVar3 < local_40) {
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar3 = FUN_014c2f80();
                pVar7 = local_40 - iVar3;
                fVar13 = extraout_XMM0_Da_04;
                if ((int)pVar7 < local_3c) {
                  pvVar6 = _pthread_getspecific(pVar7);
                  plVar9 = plVar10;
                  if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar9 + 0x3e0))();
                  fVar13 = (float)((uint)(fVar13 - fVar12) & _DAT_02390140);
                  if (fVar13 < param_1) {
                    if (plVar10 == local_38) {
                      plVar10 = local_38;
                      bVar1 = bVar11;
                      if (!bVar11) {
                        FUN_00d50b00();
                        bVar1 = true;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      bVar1 = true;
                      if ((bVar11) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    local_38 = plVar10;
                    pvVar6 = _pthread_getspecific(pVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_3c = FUN_014c2f80();
                    local_3c = local_40 - local_3c;
                    fVar13 = extraout_XMM0_Da_05;
                    bVar11 = bVar1;
                  }
                }
              }
            }
          }
        }
        iVar3 = iStack_54;
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            fVar13 = (float)FUN_00d23690(fVar13,iStack_54);
            local_50 = local_50 + iVar3;
            iStack_54 = 0;
          }
        }
      }
      lVar5 = local_60;
      FUN_01481520();
      if (local_38 == (longlong *)0x0) goto LAB_014d4379;
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      plVar10 = local_70;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_014d43c6:
      if (plVar10 == (longlong *)0x0) goto LAB_014d43e5;
      if (bVar11) {
        FUN_00d50b20();
      }
    }
LAB_014d43dc:
    *(undefined1 *)(this + 1) = 0;
  }
  local_38 = (longlong *)0x0;
LAB_014d43ff:
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01297c10 (2467 bytes) — math_loop

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  pthread_key_t pVar10;
  double dVar11;
  longlong *arg1;
  longlong lVar12;
  longlong *this;
  undefined8 extraout_XMM0_Qb;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  double local_e0;
  longlong *local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  double local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_80;
  double local_78;
  undefined8 uStack_70;
  double local_60;
  double local_58;
  char local_50;
  longlong local_48;
  pthread_key_t local_40;
  int iStack_3c;
  int iStack_38;
  
  local_d0 = *arg1;
  local_c8 = '\0';
  local_e8 = param_1;
  local_d8 = param_2;
  FUN_016cbba0();
  local_80 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0.0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  dVar1 = local_58;
  if (((local_50 == '\0') && (local_58 != 0.0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0.0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar5 = ___bzero();
  lVar12 = 0;
  if (*this != 0) {
    local_50 = '\0';
    local_58 = 0.0;
    iStack_3c = 0;
    iStack_38 = 0;
    lVar12 = 0xffffffff;
    local_48 = *this;
    while( true ) {
      local_40 = (pthread_key_t)lVar12;
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
      dVar11 = *(double *)(*(longlong *)(local_48 + 0x10) + (longlong)(int)local_40 * 8);
      local_58 = dVar11;
      pvVar6 = _pthread_getspecific(local_40);
      dVar9 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), dVar11 = dVar9, lVar12 != 0)) {
        dVar11 = *(double *)
                  ((longlong)dVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      lVar12 = (longlong)(int)local_40;
      *(undefined8 *)(*(longlong *)((longlong)dVar1 + 0x10) + (iStack_38 + lVar12) * 8) =
           *(undefined8 *)((longlong)dVar11 + 0xe8);
    }
    uVar5 = FUN_001159b0();
    lVar12 = *this;
  }
  local_60 = (double)CONCAT44(local_60._4_4_,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1));
  if (*(int *)(lVar12 + 0xc) != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    pVar10 = (pthread_key_t)lVar12;
    if (iVar4 != 0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      pVar10 = (pthread_key_t)lVar12;
      if (iVar4 != 1) goto LAB_012981ba;
    }
    if (*this == 0) {
      local_78 = DAT_023b2568;
      uStack_70 = 0;
    }
    else {
      local_50 = '\0';
      local_58 = 0.0;
      local_40 = 0xffffffff;
      iStack_3c = 0;
      iStack_38 = 0;
      local_78 = DAT_023b2568;
      uStack_70 = 0;
      local_48 = *this;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            iStack_38 = iStack_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar12 = (longlong)(int)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
        lVar7 = *(longlong *)(local_48 + 0x10);
        local_58 = *(double *)(lVar7 + 8 + lVar12 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
        pVar10 = (pthread_key_t)lVar7;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01263cf0();
        if (cVar3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60 = (double)FUN_013de8d0();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 < local_78) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_78 = (double)FUN_013de8d0();
            uStack_70 = extraout_XMM0_Qb;
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar12 = local_48;
      FUN_001159b0();
      pVar10 = (pthread_key_t)lVar12;
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar12 = 0;
    uVar5 = FUN_016c45d0(~-(ulonglong)(DAT_023b2568 == local_78) & (ulonglong)local_78,0);
    local_58 = (double)FUN_016c4760(uVar5,0);
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bfe0();
    FUN_016ea680();
    local_60 = (double)((ulonglong)local_60 & 0xffffffff00000000);
  }
LAB_012981ba:
  dVar11 = local_80;
  pVar10 = (pthread_key_t)lVar12;
  if (local_80 != 0.0) {
    FUN_00d50b00();
  }
  dVar9 = dVar11;
  if (*(int *)(*this + 0xc) == 0) goto LAB_012983d4;
  lVar12 = **(longlong **)(*this + 0x10);
  pvVar6 = _pthread_getspecific(pVar10);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  local_78 = *(double *)(lVar12 + 0xe8);
  uStack_70 = 0;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_e0 = (double)FUN_013de8d0();
  if ((local_50 != '\0') && (local_58 != 0.0)) {
    FUN_00d50b20();
  }
  if ((double)((ulonglong)(local_78 - local_e0) & _DAT_023908f0) <= DAT_023b67d8) goto LAB_012983d4;
  local_c0 = *local_d8;
  local_b8 = '\0';
  local_b0 = dVar11;
  local_a8 = '\0';
  uVar5 = FUN_00e7bcc0();
  FUN_01705e00(local_e8,&local_b0,(ulonglong)local_60 & 0xff,uVar5);
  dVar9 = local_58;
  dVar2 = dVar11;
  if (dVar11 == local_58) {
LAB_0129838c:
    dVar9 = dVar2;
    if (local_50 != '\0') {
LAB_01298392:
      if (local_58 != 0.0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_50 == '\0') {
      if (local_58 != 0.0) {
        local_60 = dVar11;
        FUN_00d50b00();
      }
      if (dVar11 != 0.0) {
        local_60 = dVar9;
        FUN_00d50b20();
        dVar2 = dVar9;
        goto LAB_0129838c;
      }
      if (local_50 == '\0') goto LAB_012983a0;
      goto LAB_01298392;
    }
    if (dVar11 != 0.0) {
      local_60 = local_58;
      FUN_00d50b20();
    }
    local_50 = '\0';
  }
LAB_012983a0:
  if ((local_a8 != '\0') && (local_b0 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_012983d4:
  local_108 = *local_d8;
  local_100 = 0;
  uVar5 = FUN_00e7bdb0();
  local_f0 = 0;
  local_f8 = 0;
  FUN_012910e0(DAT_0238fee8,&local_108,&local_f8);
  local_a0 = *this;
  local_98 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar12 = *this;
  if (lVar12 != 0) {
    local_50 = '\0';
    local_58 = 0.0;
    iStack_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_78 = dVar9;
    local_48 = lVar12;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar7 = 0;
      do {
        dVar11 = *(double *)(*(longlong *)(lVar12 + 0x10) + lVar7 * 8);
        local_58 = dVar11;
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar5);
        dVar9 = dVar11;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          dVar9 = *(double *)
                   ((longlong)dVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        local_60 = *(double *)((longlong)dVar9 + 0xe8) -
                   *(double *)(*(longlong *)((longlong)dVar1 + 0x10) + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar5);
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          dVar11 = *(double *)
                    ((longlong)dVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        *(double *)((longlong)dVar11 + 0x1b0) = local_60;
        lVar7 = lVar7 + 1;
        local_40 = (pthread_key_t)lVar7;
      } while ((int)local_40 < *(int *)(lVar12 + 0xc));
    }
    FUN_001159b0();
    dVar9 = local_78;
    dVar11 = local_80;
  }
  if (dVar9 != 0.0) {
    FUN_00d50b20();
  }
  if (dVar1 != 0.0) {
    FUN_00d50b20();
  }
  if (dVar11 != 0.0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014d4f90 (2428 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  
  (**(code **)(*arg1 + 0x378))();
  plVar11 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_014d503e;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
LAB_014d503e:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  cVar3 = (**(code **)(*arg1 + 1000))();
  if (cVar3 != '\0') {
    FUN_014bc420();
    plVar10 = local_68;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      lVar6 = FUN_014bb590();
      if (*param_2 == 0) {
LAB_014d550b:
        *(undefined1 *)(this + 1) = 0;
      }
      else {
        local_40 = plVar11;
        fVar14 = *(float *)(&DAT_0240e4c8 + (ulonglong)(iVar4 == 3) * 4);
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_58 = *param_2;
        local_50 = 0xffffffff;
        local_48 = 0;
        bVar1 = false;
        local_38 = (longlong *)0x0;
        while( true ) {
          lVar7 = (longlong)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)(local_58 + 0xc) <= iVar4) break;
          plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
          local_68 = plVar11;
          if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar9 = &local_68;
            if (cVar3 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          plVar11 = *pplVar9;
          if ((plVar11 != (longlong *)0x0) && (plVar11 != arg1)) {
            pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
            pVar8 = (pthread_key_t)pplVar9;
            plVar10 = plVar11;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar10 + 1000))();
            if (cVar3 != '\0') {
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_014bc070();
              if (cVar3 == '\0') {
                pvVar5 = _pthread_getspecific(pVar8);
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                lVar7 = (**(code **)(*plVar10 + 0x380))();
                if (lVar7 == lVar6) {
                  pvVar5 = _pthread_getspecific(pVar8);
                  plVar10 = plVar11;
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                  if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
                    if (plVar11 == local_38) {
                      plVar10 = local_38;
                      bVar2 = bVar1;
                      if (!bVar1) {
                        FUN_00d50b00();
                        plVar10 = local_38;
                        bVar2 = true;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      bVar2 = true;
                      plVar10 = plVar11;
                      if ((bVar1) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    bVar1 = bVar2;
                    local_38 = plVar10;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                    fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
                  }
                }
              }
            }
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar4 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar4 = 0;
            }
            local_50 = CONCAT44(iVar4,(int)local_50);
          }
        }
        lVar7 = local_58;
        FUN_01481520();
        pVar8 = (pthread_key_t)lVar7;
        if (local_38 == (longlong *)0x0) {
          if (*param_2 != 0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = *param_2;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_38 = (longlong *)0x0;
            fVar14 = DAT_02391078;
            while( true ) {
              lVar7 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)(local_58 + 0xc) <= iVar4) break;
              plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
              local_68 = plVar11;
              if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                _DAT_02790158 = FUN_007ef2d0();
                _DAT_02790140 = "MUAudioSourcePrincipalItem";
                _DAT_02790148 = 0x138;
                _DAT_02790150 = FUN_010fe5c0;
                _DAT_02790160 = 0;
                uRam0000000002790168 = 0;
                _DAT_02790170 = 0;
                uRam0000000002790178 = 0;
                _DAT_02790180 = 0;
                uRam0000000002790188 = 0;
                _DAT_02790190 = 0;
                uRam0000000002790198 = 0;
                _DAT_027901a0 = 0;
                uRam00000000027901a8 = 0;
                _DAT_027901b0 = 0;
                uRam00000000027901b8 = 0;
                _DAT_027901c0 = 0;
                uRam00000000027901c8 = 0;
                _DAT_027901d0 = 0;
                uRam00000000027901d8 = 0;
                _DAT_027901e0 = 0;
                uRam00000000027901e8 = 0;
                _DAT_027901f0 = 0;
                uRam00000000027901f8 = 0;
                _DAT_02790200 = 0;
                ___cxa_guard_release();
              }
              pplVar9 = (longlong **)&DAT_02802688;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar9 = &local_68;
                if (cVar3 == '\0') {
                  pplVar9 = (longlong **)&DAT_02802688;
                }
              }
              plVar11 = *pplVar9;
              if ((plVar11 != (longlong *)0x0) && (plVar11 != arg1)) {
                pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
                pVar8 = (pthread_key_t)pplVar9;
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                cVar3 = (**(code **)(*plVar10 + 1000))();
                if (cVar3 != '\0') {
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_014bc070();
                  if (cVar3 != '\0') {
                    pvVar5 = _pthread_getspecific(pVar8);
                    plVar10 = plVar11;
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    lVar7 = (**(code **)(*plVar10 + 0x380))();
                    if (lVar7 == lVar6) {
                      pvVar5 = _pthread_getspecific(pVar8);
                      plVar10 = plVar11;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                      if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
                        if (plVar11 == local_38) {
                          plVar10 = local_38;
                          bVar2 = bVar1;
                          if (!bVar1) {
                            FUN_00d50b00();
                            plVar10 = local_38;
                            bVar2 = true;
                          }
                        }
                        else {
                          FUN_00d50b00();
                          bVar2 = true;
                          plVar10 = plVar11;
                          if ((bVar1) && (local_38 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_38 = plVar10;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                          plVar11 = (longlong *)
                                    plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                        }
                        fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                        fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
                        bVar1 = bVar2;
                      }
                    }
                  }
                }
              }
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar4 = -local_50._4_4_;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar4 = 0;
                }
                local_50 = CONCAT44(iVar4,(int)local_50);
              }
            }
            lVar6 = local_58;
            FUN_01481520();
            pVar8 = (pthread_key_t)lVar6;
            if (local_38 != (longlong *)0x0) goto LAB_014d5496;
            bVar2 = true;
            local_38 = (longlong *)0x0;
            goto LAB_014d58d7;
          }
          *(undefined1 *)(this + 1) = 0;
          local_38 = (longlong *)0x0;
          if (bVar1) goto LAB_014d5913;
        }
        else {
LAB_014d5496:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc340();
          plVar11 = local_68;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            if (bVar1) {
              FUN_00d50b20();
            }
            goto LAB_014d550b;
          }
          bVar2 = false;
LAB_014d58d7:
          plVar11 = local_38;
          *(undefined1 *)(this + 1) = 0;
          if (bVar1) {
LAB_014d5913:
            *this = local_38;
            *(undefined1 *)(this + 1) = 1;
            goto LAB_014d5034;
          }
          if (!bVar2) {
            FUN_00d50b00();
            *this = plVar11;
            *(undefined1 *)(this + 1) = 1;
            goto LAB_014d5034;
          }
        }
      }
      *this = 0;
      *(undefined1 *)(this + 1) = 1;
      goto LAB_014d5034;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
LAB_014d5034:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @014d44f0 (2420 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  
  (**(code **)(*arg1 + 0x378))();
  plVar11 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_014d459e;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
LAB_014d459e:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  cVar3 = (**(code **)(*arg1 + 1000))();
  if (cVar3 != '\0') {
    FUN_014bc340();
    plVar10 = local_68;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      lVar6 = (**(code **)(*arg1 + 0x380))();
      if (*param_2 == 0) {
LAB_014d4a5b:
        *(undefined1 *)(this + 1) = 0;
      }
      else {
        local_40 = plVar11;
        fVar14 = *(float *)(&DAT_0240e4c8 + (ulonglong)(iVar4 == 3) * 4);
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_58 = *param_2;
        local_50 = 0xffffffff;
        local_48 = 0;
        bVar1 = false;
        local_38 = (longlong *)0x0;
        while( true ) {
          lVar7 = (longlong)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)(local_58 + 0xc) <= iVar4) break;
          plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
          local_68 = plVar11;
          if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar9 = &local_68;
            if (cVar3 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          plVar11 = *pplVar9;
          if ((plVar11 != (longlong *)0x0) && (plVar11 != arg1)) {
            pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
            pVar8 = (pthread_key_t)pplVar9;
            plVar10 = plVar11;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar10 + 1000))();
            if (cVar3 != '\0') {
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_014bc070();
              if (cVar3 == '\0') {
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar7 = FUN_014bb590();
                if (lVar7 == lVar6) {
                  pvVar5 = _pthread_getspecific(pVar8);
                  plVar10 = plVar11;
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                  if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
                    if (plVar11 == local_38) {
                      plVar10 = local_38;
                      bVar2 = bVar1;
                      if (!bVar1) {
                        FUN_00d50b00();
                        plVar10 = local_38;
                        bVar2 = true;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      bVar2 = true;
                      plVar10 = plVar11;
                      if ((bVar1) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    bVar1 = bVar2;
                    local_38 = plVar10;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                    fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
                  }
                }
              }
            }
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar4 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar4 = 0;
            }
            local_50 = CONCAT44(iVar4,(int)local_50);
          }
        }
        lVar7 = local_58;
        FUN_01481520();
        pVar8 = (pthread_key_t)lVar7;
        if (local_38 == (longlong *)0x0) {
          if (*param_2 != 0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = *param_2;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_38 = (longlong *)0x0;
            fVar14 = DAT_02391078;
            while( true ) {
              lVar7 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)(local_58 + 0xc) <= iVar4) break;
              plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
              local_68 = plVar11;
              if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                _DAT_02790158 = FUN_007ef2d0();
                _DAT_02790140 = "MUAudioSourcePrincipalItem";
                _DAT_02790148 = 0x138;
                _DAT_02790150 = FUN_010fe5c0;
                _DAT_02790160 = 0;
                uRam0000000002790168 = 0;
                _DAT_02790170 = 0;
                uRam0000000002790178 = 0;
                _DAT_02790180 = 0;
                uRam0000000002790188 = 0;
                _DAT_02790190 = 0;
                uRam0000000002790198 = 0;
                _DAT_027901a0 = 0;
                uRam00000000027901a8 = 0;
                _DAT_027901b0 = 0;
                uRam00000000027901b8 = 0;
                _DAT_027901c0 = 0;
                uRam00000000027901c8 = 0;
                _DAT_027901d0 = 0;
                uRam00000000027901d8 = 0;
                _DAT_027901e0 = 0;
                uRam00000000027901e8 = 0;
                _DAT_027901f0 = 0;
                uRam00000000027901f8 = 0;
                _DAT_02790200 = 0;
                ___cxa_guard_release();
              }
              pplVar9 = (longlong **)&DAT_02802688;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar9 = &local_68;
                if (cVar3 == '\0') {
                  pplVar9 = (longlong **)&DAT_02802688;
                }
              }
              plVar11 = *pplVar9;
              if ((plVar11 != (longlong *)0x0) && (plVar11 != arg1)) {
                pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
                pVar8 = (pthread_key_t)pplVar9;
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                cVar3 = (**(code **)(*plVar10 + 1000))();
                if (cVar3 != '\0') {
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_014bc070();
                  if (cVar3 != '\0') {
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar7 = FUN_014bb590();
                    if (lVar7 == lVar6) {
                      pvVar5 = _pthread_getspecific(pVar8);
                      plVar10 = plVar11;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                      if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
                        if (plVar11 == local_38) {
                          plVar10 = local_38;
                          bVar2 = bVar1;
                          if (!bVar1) {
                            FUN_00d50b00();
                            plVar10 = local_38;
                            bVar2 = true;
                          }
                        }
                        else {
                          FUN_00d50b00();
                          bVar2 = true;
                          plVar10 = plVar11;
                          if ((bVar1) && (local_38 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_38 = plVar10;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                          plVar11 = (longlong *)
                                    plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                        }
                        fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                        fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
                        bVar1 = bVar2;
                      }
                    }
                  }
                }
              }
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar4 = -local_50._4_4_;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar4 = 0;
                }
                local_50 = CONCAT44(iVar4,(int)local_50);
              }
            }
            lVar6 = local_58;
            FUN_01481520();
            pVar8 = (pthread_key_t)lVar6;
            if (local_38 != (longlong *)0x0) goto LAB_014d49e6;
            bVar2 = true;
            local_38 = (longlong *)0x0;
            goto LAB_014d4e27;
          }
          *(undefined1 *)(this + 1) = 0;
          local_38 = (longlong *)0x0;
          if (bVar1) goto LAB_014d4e63;
        }
        else {
LAB_014d49e6:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc420();
          plVar11 = local_68;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            if (bVar1) {
              FUN_00d50b20();
            }
            goto LAB_014d4a5b;
          }
          bVar2 = false;
LAB_014d4e27:
          plVar11 = local_38;
          *(undefined1 *)(this + 1) = 0;
          if (bVar1) {
LAB_014d4e63:
            *this = local_38;
            *(undefined1 *)(this + 1) = 1;
            goto LAB_014d4594;
          }
          if (!bVar2) {
            FUN_00d50b00();
            *this = plVar11;
            *(undefined1 *)(this + 1) = 1;
            goto LAB_014d4594;
          }
        }
      }
      *this = 0;
      *(undefined1 *)(this + 1) = 1;
      goto LAB_014d4594;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
LAB_014d4594:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01c3c4d0 (2128 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong **pplVar11;
  int iVar12;
  undefined8 *this;
  longlong local_98;
  longlong *local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78;
  undefined8 *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_70 = puVar3;
  (*DAT_02572370)();
  if ((undefined *)*this != (undefined *)0x0) {
    local_90._0_1_ = '\0';
    local_98 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    local_88 = (undefined *)*this;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar12 = -local_80._4_4_;
        }
        else {
          iVar12 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar12);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar12 = 0;
        }
        local_80 = CONCAT44(iVar12,(int)local_80);
      }
      lVar4 = (longlong)(int)local_80;
      iVar12 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar12);
      if (*(int *)(local_88 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_88 + 0x10);
      local_98 = *(longlong *)(lVar10 + (lVar4 + 1) * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar8 = (pthread_key_t)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      plVar6 = local_68;
      if (local_60 == '\0') {
        if (local_68 == (longlong *)0x0) goto LAB_01c3c730;
        FUN_00d50b00();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c3c650:
        local_60 = '\0';
        local_68 = plVar6;
        cVar2 = FUN_00d23d70();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_00e8fc40();
          FUN_007ef010();
          (**(code **)(*plVar6 + 0x18))();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar1 = (longlong *)plVar6[2];
          plVar7 = plVar1;
          if (plVar1 != local_68) {
            if (local_60 == '\0') {
              if (local_68 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3c709;
              }
              FUN_00d50b00();
              plVar1 = (longlong *)plVar6[2];
              plVar6[2] = (longlong)local_68;
              plVar7 = local_68;
            }
            else {
              local_60 = '\0';
              plVar7 = local_68;
LAB_01c3c709:
              plVar6[2] = (longlong)plVar7;
            }
            pVar8 = (pthread_key_t)plVar1;
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar7 = local_68;
            }
          }
          if ((local_60 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar1 = (longlong *)plVar6[3];
          plVar7 = plVar1;
          if (plVar1 != local_68) {
            if (local_60 == '\0') {
              if (local_68 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3cb6d;
              }
              FUN_00d50b00();
              plVar1 = (longlong *)plVar6[3];
              plVar6[3] = (longlong)local_68;
              plVar7 = local_68;
            }
            else {
              local_60 = '\0';
              plVar7 = local_68;
LAB_01c3cb6d:
              plVar6[3] = (longlong)plVar7;
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar7 = local_68;
            }
          }
          if ((local_60 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = '\0';
          local_68 = plVar6;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if (local_68 != (longlong *)0x0) goto LAB_01c3c650;
LAB_01c3c730:
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ebc80();
        plVar6 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          if (*(int *)((longlong)plVar6 + 0xc) != 0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar12 = -local_50._4_4_;
                }
                else {
                  iVar12 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar12);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar12 = 0;
                }
                local_50 = CONCAT44(iVar12,(int)local_50);
              }
              lVar4 = (longlong)(int)local_50;
              iVar12 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar12);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar12) break;
              lVar10 = local_58[2];
              local_68 = *(longlong **)(lVar10 + (lVar4 + 1) * 8);
              local_38 = '\0';
              local_40 = local_68;
              cVar2 = FUN_00d23d70();
              pVar8 = (pthread_key_t)lVar10;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar2 != '\0') {
                plVar6 = (longlong *)FUN_00e8fc40();
                FUN_007ef010();
                (**(code **)(*plVar6 + 0x18))();
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e7c0();
                plVar1 = (longlong *)plVar6[2];
                plVar7 = plVar1;
                if (plVar1 != local_40) {
                  if (local_38 == '\0') {
                    if (local_40 == (longlong *)0x0) {
                      plVar7 = (longlong *)0x0;
                      goto LAB_01c3c954;
                    }
                    FUN_00d50b00();
                    plVar1 = (longlong *)plVar6[2];
                    plVar6[2] = (longlong)local_40;
                    plVar7 = local_40;
                  }
                  else {
                    local_38 = '\0';
                    plVar7 = local_40;
LAB_01c3c954:
                    plVar6[2] = (longlong)plVar7;
                  }
                  pVar8 = (pthread_key_t)plVar1;
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b20();
                    plVar7 = local_40;
                  }
                }
                if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e7c0();
                plVar1 = (longlong *)plVar6[3];
                plVar7 = plVar1;
                if (plVar1 != local_40) {
                  if (local_38 == '\0') {
                    if (local_40 == (longlong *)0x0) {
                      plVar7 = (longlong *)0x0;
                      goto LAB_01c3c9ff;
                    }
                    FUN_00d50b00();
                    plVar1 = (longlong *)plVar6[3];
                    plVar6[3] = (longlong)local_40;
                    plVar7 = local_40;
                  }
                  else {
                    local_38 = '\0';
                    plVar7 = local_40;
LAB_01c3c9ff:
                    plVar6[3] = (longlong)plVar7;
                  }
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b20();
                    plVar7 = local_40;
                  }
                }
                if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_38 = '\0';
                local_40 = plVar6;
                FUN_00d21140();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
          }
          FUN_00d50b20();
        }
      }
    }
    puVar9 = local_88;
    FUN_001159b0();
  }
  if (*(int *)((longlong)local_70 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)local_90);
    pplVar11 = &local_40;
    if ((char)local_90 != '\0') {
      pplVar11 = &local_90;
    }
    local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_90);
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @012996f0 (1802 bytes) — math_loop

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
  longlong *arg1;
  longlong *this;
  longlong lVar12;
  undefined8 unaff_R15;
  undefined7 uVar14;
  ulonglong uVar13;
  int local_58;
  
  lVar1 = *this;
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
                if (*(longlong *)(lVar7 + 0x60) != *arg1) goto LAB_01299950;
              }
              else if (*(longlong *)
                        (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                        + 0x60) != *arg1) {
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
              lVar7 = *arg1;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *arg1;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  lVar7 = *(longlong *)
                           (lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
              }
              if (*(int *)(*(longlong *)(lVar7 + 0x40) + 0xc) <= iVar3) goto LAB_01299820;
              lVar7 = *arg1;
              pvVar5 = _pthread_getspecific(pVar10);
              if (pvVar5 != (void *)0x0) {
                lVar7 = *arg1;
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




// ==================================================
// @010fee50 (1778 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_010ff5d0();
  *this = &DAT_025e6c30;
  this[7] = &DAT_025e7098;
  FUN_01100bd0();
  this[0x1a] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01100eb0();
    FUN_00e87980();
  }
  this[0x1b] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01101020();
    FUN_00e87980();
  }
  this[0x1c] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01101190();
    FUN_00e87980();
  }
  this[0x1d] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01101300();
    FUN_00e87980();
  }
  this[0x1e] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01101470();
    FUN_00e87980();
  }
  this[0x1f] = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_011015e0();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x20) = 0;
  if (DAT_027c0170 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      _uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027901fb == '\0') {
    FUN_01101750();
    FUN_00e87980();
  }
  FUN_011018c0();
  FUN_01101bb0();
  FUN_01101eb0();
  FUN_011021b0();
  FUN_011024a0();
  FUN_01102790();
  return;
}




// ==================================================
// @01bfb000 (1579 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 arg1;
  longlong *this;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined4 local_9c;
  float local_98;
  float local_94;
  longlong *local_90;
  char local_88;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  plVar11 = local_70;
  cVar1 = (**(code **)(*this + 0x688))();
  if (cVar1 == '\0') {
    uVar10 = 0;
  }
  else {
    iVar2 = FUN_01caecd0();
    uVar10 = CONCAT71((int7)((ulonglong)arg1 >> 8),iVar2 == 0);
    if ((iVar2 == 0) && (param_2 != '\0')) {
      plVar7 = (longlong *)this[0x1e];
      (**(code **)(*(longlong *)this[0x1d] + 0x960))();
      local_88 = 0;
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      local_88 = '\x01';
      local_90 = local_70;
      local_94 = (float)(**(code **)(*plVar7 + 0x380))();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)this[0x1d] + 0x960))();
      local_98 = (float)FUN_00d8d7b0();
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      plVar7 = (longlong *)&DAT_02572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_01a13070();
      (**(code **)(*local_48 + 0xe20))();
      if (local_68[0] == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != (longlong *)0x0) {
        local_68[0] = '\0';
        local_70 = (longlong *)0x0;
        local_60 = plVar11;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar2 = -local_58._4_4_;
            }
            else {
              iVar2 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar2);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar2 = 0;
            }
            local_58 = CONCAT44(iVar2,(int)local_58);
          }
          lVar4 = (longlong)(int)local_58;
          iVar2 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar2);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar2) break;
          lVar8 = local_60[2];
          local_70 = *(longlong **)(lVar8 + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          pVar6 = (pthread_key_t)lVar8;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_0125e7c0();
          plVar11 = local_48;
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((uVar12 = FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            uVar12 = FUN_00d50b20();
          }
          local_b8 = '\0';
          local_c0 = local_70;
          FUN_019a54a0(uVar12,&local_c0);
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar11;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            fVar14 = local_94;
            fVar15 = DAT_02390d34;
            if (local_94 < DAT_02390d34) goto LAB_01bfb38d;
          }
          else {
            fVar13 = (float)FUN_00d459e0();
            fVar14 = fVar13 + local_98;
            fVar15 = DAT_02390d34;
            if (fVar13 + local_98 < DAT_02390d34) {
LAB_01bfb38d:
              fVar15 = fVar14;
              if (fVar14 < 0.0) {
                fVar15 = 0.0;
              }
            }
          }
          local_9c = FUN_01bf6fe0(fVar15);
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc100(local_9c);
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        plVar7 = local_60;
      }
      if (*(int *)((longlong)puVar3 + 0xc) != 0) {
        FUN_01a13070();
        (**(code **)(*local_d8 + 0xe20))();
        FUN_00d23310();
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar7 >> 8),local_68[0]);
        pcVar9 = local_38;
        if (local_68[0] != '\0') {
          pcVar9 = local_68;
        }
        local_38[0] = local_68[0];
        *pcVar9 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        plVar11 = local_48;
        pvVar5 = _pthread_getspecific(pVar6);
        plVar7 = local_48;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar11 = plVar7, lVar4 != 0)) {
          plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        local_a8 = '\0';
        local_b0 = puVar3;
        FUN_013880c0();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar10 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
      FUN_00d50b20();
    }
  }
  return uVar10 & 0xffffffff;
}




// ==================================================
// @01bfd040 (1564 bytes) — math_loop

{
  undefined *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  longlong *arg1;
  longlong this;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  longlong local_f0;
  char local_e8;
  undefined *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined4 local_a4;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  float local_8c;
  undefined *local_88;
  char local_80 [8];
  undefined *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a13070();
  (**(code **)(*local_48 + 0xe20))();
  iVar11 = *(int *)(local_88 + 0xc);
  if (local_80[0] != '\0') {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar11 != 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    (**(code **)(**(longlong **)(this + 0xe8) + 0x960))();
    local_8c = (float)FUN_00d8d7b0();
    if ((local_80[0] != '\0') && (local_88 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a13070();
    (**(code **)(*local_48 + 0xe20))();
    puVar1 = local_88;
    if (local_80[0] == '\0') {
      if (((local_88 != (undefined *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80[0] = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined *)0x0) {
      local_80[0] = '\0';
      local_88 = (undefined *)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_70._4_4_ = 0;
      local_50 = puVar4;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar11 = -local_70._4_4_;
          }
          else {
            iVar11 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar11);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar11 = 0;
          }
          local_70 = CONCAT44(iVar11,(int)local_70);
        }
        lVar5 = (longlong)(int)local_70;
        iVar11 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar11);
        if (*(int *)(local_78 + 0xc) <= iVar11) break;
        local_88 = *(undefined **)(*(longlong *)(local_78 + 0x10) + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = plVar2;
        local_40[0] = '\0';
        uVar12 = FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        local_c8 = local_88;
        local_c0 = '\0';
        FUN_019a54a0(uVar12,&local_c8);
        plVar2 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_c0 != '\0') && (local_c8 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        fVar13 = local_8c;
        if (plVar2 != (longlong *)0x0) {
          fVar13 = (float)FUN_00d459e0();
          fVar13 = fVar13 + local_8c;
        }
        fVar14 = 0.0;
        if ((0.0 <= fVar13) && (fVar14 = fVar13, DAT_02390d34 < fVar13)) {
          fVar14 = DAT_02390d34;
        }
        local_a4 = FUN_01bf6fe0(fVar14);
        FUN_00d23340();
        plVar3 = local_48;
        local_a0 = local_40[0];
        pcVar10 = &local_a0;
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = pcVar10;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (pthread_key_t)pcVar10;
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc100(local_a4);
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      puVar9 = local_78;
      FUN_001159b0();
      FUN_00d50b20();
      puVar4 = local_50;
    }
    FUN_01a13070();
    (**(code **)(*(longlong *)CONCAT71(uStack_9f,local_a0) + 0xe20))();
    FUN_00d23310();
    puVar1 = local_88;
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_80[0]);
    pcVar10 = local_38;
    if (local_80[0] != '\0') {
      pcVar10 = local_80;
    }
    local_38[0] = local_80[0];
    *pcVar10 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = '\0';
    local_b8 = puVar4;
    FUN_013880c0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (puVar1 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(this + 0xe8) == *arg1) {
    FUN_00e38430();
  }
  return;
}




// ==================================================
// @01b8b2b0 (1540 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *arg1;
  longlong *this;
  undefined4 uVar8;
  float fVar9;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (this[0x29] != *arg1) {
    if (this[0x29] != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_88 = 0;
        (**(code **)(this[0x27] + 0x10))();
        FUN_00d50b00();
        local_88 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        local_e0 = 0;
        local_d8 = '\0';
        plVar6 = &local_e0;
        local_90 = this + 0x27;
        FUN_00cbadd0(plVar6,&local_f0);
        param_1 = (pthread_key_t)plVar6;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          (**(code **)(*local_90 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = this[0x29];
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      this[0x29] = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = this[0x29];
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        plVar6 = this + 0x27;
        local_78 = 0;
        (**(code **)(this[0x27] + 0x10))();
        FUN_00d50b00();
        local_78 = '\x01';
        local_68 = 0;
        local_70 = this[0x29];
        local_80 = plVar6;
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        plVar7 = &local_d0;
        FUN_00cbad30(plVar7,&local_70,4);
        pVar5 = (pthread_key_t)plVar7;
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          (**(code **)(*local_80 + 0x10))();
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_58 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_58 = '\x01';
        local_60 = plVar6;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0188f1e0();
        local_50 = local_b0;
        local_48 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_48 = '\x01';
        FUN_006ddb00();
        uVar8 = FUN_00e86210();
        local_c0 = DAT_02726c58;
        if (DAT_02726c58 != 0) {
          uVar8 = FUN_00d50b00();
        }
        local_b8 = '\x01';
        FUN_00c841b0(uVar8,&local_c0);
        local_40 = local_a0;
        local_38 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_38 = '\x01';
        plVar6 = &local_40;
        FUN_00cbad30(plVar6,&local_50,4);
        param_1 = (pthread_key_t)plVar6;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          (**(code **)(*local_60 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    *(undefined4 *)((longlong)this + 0x184) = 0x3f19999a;
    if (this[0x29] != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_0188f1c0();
      if (_DAT_023b294c < fVar9 * DAT_02394dc0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_0188f1c0();
        *(float *)((longlong)this + 0x184) = fVar9 * DAT_02394dc0;
      }
    }
    (**(code **)(*this + 0x620))();
  }
  return;
}




// ==================================================
// @01335ab0 (1527 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  pthread_key_t pVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong lVar9;
  char unaff_SIL;
  longlong this;
  longlong local_a8;
  char local_a0;
  int local_90;
  int local_68;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x150) == 0) {
    return;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01538fa0();
  if (iVar3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(this + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_68 = -1;
    while (local_68 = local_68 + 1, local_68 < *(int *)(lVar1 + 0xc)) {
      pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar1 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar8 = *(longlong *)(this + 0x150);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_013e1570();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    lVar8 = lVar1;
    FUN_001150f0();
    param_1 = (pthread_key_t)lVar8;
  }
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_01335c77;
  }
  else {
LAB_01335c77:
    cVar2 = FUN_01334f30();
    if (cVar2 == '\0') goto LAB_01335ca4;
  }
  FUN_013357a0();
LAB_01335ca4:
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      pVar4 = 0;
      do {
        lVar8 = local_a8;
        pVar7 = pVar4;
        pvVar5 = _pthread_getspecific(pVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 != 0) {
          local_a0 = '\0';
          local_a8 = 0;
          local_90 = -1;
          while( true ) {
            lVar6 = (longlong)local_90;
            local_90 = local_90 + 1;
            if (*(int *)(lVar8 + 0xc) <= local_90) break;
            lVar9 = *(longlong *)(lVar8 + 0x10);
            local_a8 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
            pVar7 = (pthread_key_t)lVar9;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            if (unaff_SIL != '\0') {
              FUN_0039e8b0();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_00e7bdb0();
              FUN_01287c80();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar4 = pVar4 + 1;
      } while ((int)pVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c3bc90 (1471 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong **pplVar11;
  int iVar12;
  undefined8 *this;
  longlong local_98;
  longlong *local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_48 = puVar3;
  (*DAT_02572370)();
  if ((undefined *)*this != (undefined *)0x0) {
    local_90._0_1_ = '\0';
    local_98 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_80._4_4_ = 0;
    local_88 = (undefined *)*this;
    while( true ) {
      if (local_80._4_4_ != 0) {
        if (local_80._4_4_ < 1) {
          iVar12 = -local_80._4_4_;
        }
        else {
          iVar12 = (int)local_80 - local_80._4_4_;
          local_80 = CONCAT44(local_80._4_4_,iVar12);
          FUN_00d23690();
          local_78 = local_78 + local_80._4_4_;
          iVar12 = 0;
        }
        local_80 = CONCAT44(iVar12,(int)local_80);
      }
      lVar4 = (longlong)(int)local_80;
      iVar12 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar12);
      if (*(int *)(local_88 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_88 + 0x10);
      local_98 = *(longlong *)(lVar10 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar8 = (pthread_key_t)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ebc80();
      plVar6 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar6 + 0xc) != 0) {
          local_68 = '\0';
          local_70 = (longlong *)0x0;
          local_60 = plVar6;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          while( true ) {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar12 = -local_58._4_4_;
              }
              else {
                iVar12 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar12);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar12 = 0;
              }
              local_58 = CONCAT44(iVar12,(int)local_58);
            }
            lVar4 = (longlong)(int)local_58;
            iVar12 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar12);
            if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
            lVar10 = local_60[2];
            local_70 = *(longlong **)(lVar10 + (lVar4 + 1) * 8);
            local_38 = '\0';
            local_40 = local_70;
            cVar2 = FUN_00d23d70();
            pVar8 = (pthread_key_t)lVar10;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              plVar6 = (longlong *)FUN_00e8fc40();
              FUN_007ef010();
              (**(code **)(*plVar6 + 0x18))();
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              plVar1 = (longlong *)plVar6[2];
              plVar7 = plVar1;
              if (plVar1 != local_40) {
                if (local_38 == '\0') {
                  if (local_40 == (longlong *)0x0) {
                    plVar7 = (longlong *)0x0;
                    goto LAB_01c3bfaf;
                  }
                  FUN_00d50b00();
                  plVar1 = (longlong *)plVar6[2];
                  plVar6[2] = (longlong)local_40;
                  plVar7 = local_40;
                }
                else {
                  local_38 = '\0';
                  plVar7 = local_40;
LAB_01c3bfaf:
                  plVar6[2] = (longlong)plVar7;
                }
                pVar8 = (pthread_key_t)plVar1;
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                  plVar7 = local_40;
                }
              }
              if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              plVar1 = (longlong *)plVar6[3];
              plVar7 = plVar1;
              if (plVar1 != local_40) {
                if (local_38 == '\0') {
                  if (local_40 == (longlong *)0x0) {
                    plVar7 = (longlong *)0x0;
                    goto LAB_01c3c058;
                  }
                  FUN_00d50b00();
                  plVar1 = (longlong *)plVar6[3];
                  plVar6[3] = (longlong)local_40;
                  plVar7 = local_40;
                }
                else {
                  local_38 = '\0';
                  plVar7 = local_40;
LAB_01c3c058:
                  plVar6[3] = (longlong)plVar7;
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                  plVar7 = local_40;
                }
              }
              if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_38 = '\0';
              local_40 = plVar6;
              FUN_00d21140();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_88;
    FUN_001159b0();
  }
  if (*(int *)((longlong)local_48 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)local_90);
    pplVar11 = &local_40;
    if ((char)local_90 != '\0') {
      pplVar11 = &local_90;
    }
    local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_90);
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0129aeb0 (1388 bytes) — math_loop

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  uint uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong arg1;
  longlong *this;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  int local_40;
  
  if ((*(longlong *)(arg1 + 0x100) != 0) && (cVar4 = FUN_0129ac30(), cVar4 != '\0')) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_012f7cb0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012f7d90();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4d80();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_0129b427;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_0129b427;
    if (0 < *(int *)(local_a0 + 0xc)) {
      uVar10 = 0;
      do {
        lVar3 = local_58;
        if (*(longlong *)(*(longlong *)(local_a0 + 0x10) + (ulonglong)uVar10 * 8) !=
            *(longlong *)(arg1 + 0x100)) {
          uVar7 = uVar10;
          pvVar5 = _pthread_getspecific(uVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_012f7cb0();
          if ((double)((ulonglong)(dVar13 - (dVar11 + dVar12)) & _DAT_023908f0) < _DAT_02391038) {
            pvVar5 = _pthread_getspecific(uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_012f7cb0();
            FUN_012e9900(uVar14,DAT_023934c8);
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_0129b1d1;
              }
            }
            else if (local_58 != 0) {
LAB_0129b1d1:
              local_58 = 0;
              local_40 = -1;
              do {
                lVar6 = (longlong)local_40;
                local_40 = local_40 + 1;
                iVar1 = *(int *)(lVar3 + 0xc);
                if (iVar1 <= local_40) goto LAB_0129b3de;
                lVar9 = *(longlong *)(lVar3 + 0x10);
                local_58 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
                FUN_0125e7c0();
                pVar8 = (pthread_key_t)lVar9;
                if (local_d0 == 0) {
                  cVar4 = '\0';
                }
                else {
                  FUN_0125e7c0();
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e7c0();
                  if (local_c0 == local_b0) {
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar4 = FUN_0129aaf0();
                  }
                  else {
                    cVar4 = '\0';
                  }
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_c8 != '\0') && (local_d0 != 0)) {
                  FUN_00d50b20();
                }
              } while (cVar4 == '\0');
              *(undefined1 *)(this + 1) = 0;
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              *this = local_58;
              *(undefined1 *)(this + 1) = 1;
LAB_0129b3de:
              local_50 = '\0';
              FUN_001159b0();
              FUN_00d50b20();
              if (local_40 < iVar1) {
                FUN_000be170();
                bVar2 = true;
                goto LAB_0129b416;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(local_a0 + 0xc));
    }
    FUN_000be170();
    bVar2 = false;
LAB_0129b416:
    FUN_00d50b20();
    if (bVar2) {
      return this;
    }
  }
LAB_0129b427:
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return this;
}




// ==================================================
// @01335090 (1340 bytes) — math_loop

{
  pthread_key_t pVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong this;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  param_2 = param_2 & 0xffffffff;
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 == 3) {
      return;
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25eec60;
  *puVar4 = &DAT_025eec60;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  (*DAT_025eec78)();
  pvVar5 = _pthread_getspecific(pVar7);
  pVar1 = (pthread_key_t)puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_01538fb0();
  pvVar5 = _pthread_getspecific(pVar7);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_01539020(DAT_023908e0);
  pvVar5 = _pthread_getspecific(pVar7);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar7 = pVar1;
  }
  FUN_015390a0();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e2c20(param_2,0);
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0133523e;
  }
  else {
LAB_0133523e:
    cVar2 = FUN_01334f30();
    if (cVar2 == '\0') goto LAB_013352e3;
  }
  FUN_013359c0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_013357a0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_013352e3:
  pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_2);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a5f0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bfa930 (1190 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *this;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  float local_64;
  longlong local_60;
  char local_58;
  int local_48;
  float local_34;
  
  lVar2 = local_60;
  FUN_01bfa890();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_60 + 0xc) == 0) {
    (**(code **)(*(longlong *)this[0x1d] + 0x998))();
    plVar1 = (longlong *)this[0x1d];
    FUN_00e9aaa0();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_48 = -1;
    local_64 = DAT_02391074;
    local_34 = DAT_02391078;
    iVar9 = 0;
    fVar11 = local_64;
    while( true ) {
      local_64 = fVar11;
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar8 = *(longlong *)(lVar2 + 0x10);
      local_60 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_c0 == 0) {
        bVar10 = false;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01326de0();
        bVar10 = iVar4 == 3;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      fVar11 = local_64;
      if (bVar10) {
        FUN_01bfa490();
        fVar11 = (float)FUN_01bf7000();
        iVar9 = iVar9 + 1;
        fVar12 = fVar11;
        if (local_34 <= fVar11) {
          fVar12 = local_34;
        }
        local_34 = fVar12;
        if (fVar11 <= local_64) {
          fVar11 = local_64;
        }
      }
    }
    FUN_001159b0();
    plVar1 = (longlong *)this[0x1d];
    if (((iVar9 == 0) || (local_34 != local_64)) || (NAN(local_34) || NAN(local_64))) {
      FUN_00e99dd0();
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)this[0x1e] + 0x378))(local_34);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
    plVar1 = (longlong *)this[0x1d];
    cVar3 = (**(code **)(*this + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
  }
  FUN_01bfe330();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0135de20 (1178 bytes) — calculation

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *arg1;
  longlong this;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 *local_48;
  char local_40;
  char local_31;
  
  local_48 = (undefined8 *)*arg1;
  local_40 = '\0';
  uVar2 = FUN_00d23d70();
  uVar9 = (ulonglong)uVar2;
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_31 = (char)uVar2;
  if (local_31 == '\0') goto LAB_0135e071;
  FUN_01329970();
  FUN_01329030();
  local_48 = (undefined8 *)*arg1;
  local_40 = '\0';
  cVar1 = FUN_00d24090();
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_0134ad30();
  }
  local_48 = (undefined8 *)*arg1;
  local_40 = '\0';
  uVar2 = FUN_00d24090();
  puVar8 = (undefined8 *)(ulonglong)uVar2;
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar2 == '\0') {
    FUN_0134b100();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (puVar8 = *(undefined8 **)(this + 0x148), puVar8 != (undefined8 *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(undefined8 **)(this + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)puVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135dfa8;
    if (param_2 != '\0') {
      local_68 = *arg1;
      local_60 = '\0';
      FUN_0135dd30();
      puVar8 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_70 = 1;
      pVar7 = 1;
      FUN_01355320(1,local_78,0);
      if (puVar4 == local_48) {
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_0135dfa8:
    FUN_0135e480();
    if (puVar4 == local_48) {
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)puVar4 + 0xc) == 0) {
      FUN_0135e940();
      puVar8 = local_48;
      if (local_48 == puVar4) {
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = puVar8;
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
    }
  }
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (puVar8 = *(undefined8 **)(this + 0x148), puVar8 != (undefined8 *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(undefined8 **)(this + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)puVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135e035;
LAB_0135e041:
    uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),local_31);
    if (*(int *)((longlong)puVar4 + 0xc) != 0) {
      FUN_013357a0();
    }
  }
  else {
LAB_0135e035:
    cVar1 = FUN_01334f30();
    if (cVar1 != '\0') goto LAB_0135e041;
    uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),local_31);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0135e071;
  }
  FUN_00d50b20();
LAB_0135e071:
  return uVar9 & 0xffffffff;
}




// ==================================================
// @01c3b620 (1123 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *this;
  longlong *plVar13;
  longlong local_78;
  char local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = puVar3;
  if ((undefined *)*this != (undefined *)0x0) {
    local_70[0] = '\0';
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = (undefined *)*this;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar12 = -local_60._4_4_;
        }
        else {
          iVar12 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar12);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar12 = 0;
        }
        local_60 = CONCAT44(iVar12,(int)local_60);
      }
      lVar4 = (longlong)(int)local_60;
      iVar12 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (*(int *)(local_68 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong *)(lVar10 + (lVar4 + 1) * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar8 = (pthread_key_t)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      plVar6 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c3b7a0;
        }
      }
      else if (local_48 != (longlong *)0x0) {
LAB_01c3b7a0:
        local_40 = '\0';
        local_48 = plVar6;
        cVar2 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_00e8fc40();
          FUN_007ef010();
          (**(code **)(*plVar6 + 0x18))();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          puVar3 = local_50;
          plVar13 = (longlong *)plVar6[2];
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3b84c;
              }
              FUN_00d50b00();
              plVar1 = (longlong *)plVar6[2];
              plVar6[2] = (longlong)local_48;
              plVar13 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b84c:
              plVar6[2] = (longlong)plVar7;
              plVar1 = plVar13;
              plVar13 = plVar7;
            }
            pVar8 = (pthread_key_t)plVar1;
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar13 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar13 = (longlong *)plVar6[3];
          plVar7 = plVar13;
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3b8f0;
              }
              FUN_00d50b00();
              plVar13 = (longlong *)plVar6[3];
              plVar6[3] = (longlong)local_48;
              plVar7 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b8f0:
              plVar6[3] = (longlong)plVar7;
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar7 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_68;
    FUN_001159b0();
  }
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_70[0]);
    pcVar11 = local_38;
    if (local_70[0] != '\0') {
      pcVar11 = local_70;
    }
    local_38[0] = local_70[0];
    *pcVar11 = '\0';
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01388130 (1109 bytes) — math_loop

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  int iVar9;
  longlong *arg1;
  longlong this;
  undefined1 local_b8 [4];
  int iStack_b4;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  local_58 = puVar4;
  FUN_00c92160();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = puVar4;
  if (*arg1 != 0) {
    local_98 = 0;
    local_a0 = 0;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_88._4_4_ = 0;
    local_90 = *arg1;
    while( true ) {
      if (local_88._4_4_ != 0) {
        if (local_88._4_4_ < 1) {
          iVar9 = -local_88._4_4_;
        }
        else {
          iVar9 = (int)local_88 - local_88._4_4_;
          local_88 = CONCAT44(local_88._4_4_,iVar9);
          FUN_00d23690();
          local_80 = local_80 + local_88._4_4_;
          iVar9 = 0;
        }
        local_88 = CONCAT44(iVar9,(int)local_88);
      }
      lVar5 = (longlong)(int)local_88;
      iVar9 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar9);
      if (*(int *)(local_90 + 0xc) <= iVar9) break;
      local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + 8 + lVar5 * 8);
      local_70 = 0;
      lVar5 = *(longlong *)(local_a0 + 0x10);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_60 = 0;
      lVar1 = *(longlong *)(local_a0 + 0x18);
      local_78 = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar1;
      uVar6 = FUN_0133bd20(*(undefined8 *)(local_a0 + 0x20),&local_68,local_b8,&local_31,1);
      *(undefined8 *)(local_a0 + 0x20) = uVar6;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (((*(longlong *)(local_a0 + 0x20) != 0) && (0 < iStack_b4)) && (local_31 != '\0')) {
        local_b0 = local_58;
        local_a8 = '\0';
        FUN_015b4ee0();
        if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(local_a0 + 0x10);
        if (lVar5 != 0) {
          FUN_00d50b00();
          local_40 = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(local_a0 + 0x18);
        if (lVar5 != 0) {
          FUN_00d50b00();
          local_40 = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_90;
    FUN_01954b60();
    pVar8 = (pthread_key_t)lVar5;
  }
  puVar2 = local_50;
  puVar4 = local_58;
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_0141bab0();
    if (iVar9 != 3) goto LAB_0138846b;
  }
  else {
LAB_0138846b:
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') goto LAB_01388504;
  }
  if (0xe < *(int *)(puVar4 + 3) + 7U) {
    FUN_013469e0();
    FUN_01388750();
    FUN_01353f80();
  }
LAB_01388504:
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01296db0 (1035 bytes) — math_loop

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong arg1;
  longlong *this;
  longlong lVar11;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_38;
  
  FUN_012972e0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_01296ea8;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_01296ea8:
    *this = 0;
    *(undefined1 *)(this + 1) = 1;
    return this;
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar7 = FUN_013c8d70();
  if (cVar7 == '\0') {
LAB_01297147:
    *this = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01297147;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01297147;
    if (*(int *)(local_78 + 0xc) < 1) {
      bVar4 = false;
      local_38 = 0;
    }
    else {
      lVar11 = 0;
      local_38 = 0;
      bVar4 = false;
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_78 + 0x10) + lVar11 * 8);
        pvVar8 = _pthread_getspecific(param_1);
        lVar5 = local_38;
        bVar6 = bVar4;
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (*(double *)(lVar3 + 0xe8) <= *(double *)(arg1 + 0xe8) &&
              *(double *)(arg1 + 0xe8) != *(double *)(lVar3 + 0xe8)) goto LAB_01296fd9;
        }
        else {
          pdVar1 = (double *)
                   (*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                   0xe8);
          if (*pdVar1 <= *(double *)(arg1 + 0xe8) && *(double *)(arg1 + 0xe8) != *pdVar1)
          {
LAB_01296fd9:
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012972e0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if (local_a0 == local_78) {
              if (local_38 == 0) {
LAB_012970eb:
                if (lVar3 == local_38) {
                  if ((!bVar4) && (lVar3 != 0)) {
                    FUN_00d50b00();
                    bVar6 = true;
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  bVar6 = true;
                  lVar5 = lVar3;
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                pvVar8 = _pthread_getspecific(param_1);
                lVar9 = lVar3;
                if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar2 = *(double *)(lVar9 + 0xe8);
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                  if (*(double *)(local_38 + 0xe8) <= dVar2 && dVar2 != *(double *)(local_38 + 0xe8)
                     ) goto LAB_012970eb;
                }
                else {
                  pdVar1 = (double *)
                           (*(longlong *)
                             (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                           0xe8);
                  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) goto LAB_012970eb;
                }
              }
            }
          }
        }
        bVar4 = bVar6;
        local_38 = lVar5;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if (bVar4) {
      *this = local_38;
    }
    else {
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *this = local_38;
    }
  }
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return this;
}




// ==================================================
// @012976e0 (1035 bytes) — math_loop

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong arg1;
  longlong *this;
  longlong lVar11;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_38;
  
  FUN_012972e0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_012977d8;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_012977d8:
    *this = 0;
    *(undefined1 *)(this + 1) = 1;
    return this;
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar7 = FUN_013c8d70();
  if (cVar7 == '\0') {
LAB_01297a77:
    *this = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01297a77;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01297a77;
    if (*(int *)(local_78 + 0xc) < 1) {
      bVar4 = false;
      local_38 = 0;
    }
    else {
      lVar11 = 0;
      local_38 = 0;
      bVar4 = false;
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_78 + 0x10) + lVar11 * 8);
        pvVar8 = _pthread_getspecific(param_1);
        lVar5 = local_38;
        bVar6 = bVar4;
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (*(double *)(arg1 + 0xe8) <= *(double *)(lVar3 + 0xe8) &&
              *(double *)(lVar3 + 0xe8) != *(double *)(arg1 + 0xe8)) goto LAB_01297909;
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                   0xe8);
          if (*(double *)(arg1 + 0xe8) <= dVar1 && dVar1 != *(double *)(arg1 + 0xe8)) {
LAB_01297909:
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012972e0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if (local_a0 == local_78) {
              if (local_38 != 0) {
                pvVar8 = _pthread_getspecific(param_1);
                lVar9 = lVar3;
                if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar1 = *(double *)(lVar9 + 0xe8);
                pvVar8 = _pthread_getspecific(param_1);
                if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                  dVar2 = *(double *)(local_38 + 0xe8);
                }
                else {
                  dVar2 = *(double *)
                           (*(longlong *)
                             (local_38 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                           0xe8);
                }
                if (dVar2 <= dVar1) goto LAB_0129787b;
              }
              if (lVar3 == local_38) {
                if ((!bVar4) && (lVar3 != 0)) {
                  FUN_00d50b00();
                  bVar6 = true;
                }
              }
              else {
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                bVar6 = true;
                lVar5 = lVar3;
                if ((bVar4) && (local_38 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
LAB_0129787b:
        bVar4 = bVar6;
        local_38 = lVar5;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if (bVar4) {
      *this = local_38;
    }
    else {
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        FUN_00d50b00();
      }
      *this = local_38;
    }
  }
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01bfbe60 (896 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
        FUN_00d50b00();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar1 = DAT_027e8870;
        if (DAT_027e8870 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((longlong *)(this + 0xb8) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @012992a0 (888 bytes) — math_loop

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong *this;
  longlong lVar10;
  int local_50;
  
  lVar1 = *this;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar9 * 8);
        pvVar4 = _pthread_getspecific(uVar9);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        lVar10 = *(longlong *)(lVar10 + 0xe0);
        if (lVar10 != 0) {
          FUN_00d50b00();
          local_50 = -1;
          while( true ) {
            lVar5 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar10 + 0xc) <= local_50) break;
            lVar7 = *(longlong *)(lVar10 + 0x10);
            lVar5 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar8 = (pthread_key_t)lVar7;
            lVar7 = lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar7 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            lVar7 = *(longlong *)(lVar7 + 0x50);
            if (lVar7 == 0) {
LAB_012995b0:
              iVar3 = -1;
              iVar2 = -1;
            }
            else {
              pvVar4 = _pthread_getspecific(pVar8);
              if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                lVar7 = *(longlong *)(lVar7 + 0x40);
                if (lVar7 != 0) goto LAB_012994a0;
                goto LAB_012995b0;
              }
              lVar7 = *(longlong *)
                       (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8)
                       + 0x40);
              if (lVar7 == 0) goto LAB_012995b0;
LAB_012994a0:
              pvVar4 = _pthread_getspecific(pVar8);
              if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                if (*(longlong *)(lVar7 + 0x60) != 0) goto LAB_012994f0;
                goto LAB_012995b0;
              }
              if (*(longlong *)
                   (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x60) == 0) goto LAB_012995b0;
LAB_012994f0:
              pvVar4 = _pthread_getspecific(pVar8);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar2 = FUN_00d23d20();
              pvVar4 = _pthread_getspecific(pVar8);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_00d23d20();
              if ((iVar2 == -1) || (iVar3 == -1)) goto LAB_012995b0;
            }
            pvVar4 = _pthread_getspecific(pVar8);
            lVar7 = lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar7 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            *(int *)(lVar7 + 0x60) = iVar2;
            pvVar4 = _pthread_getspecific(pVar8);
            if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            *(int *)(lVar5 + 100) = iVar3;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @01298e30 (878 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *this;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  lVar1 = *this;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar2 + 0xa0);
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0xa0);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
            lVar4 = *(longlong *)(lVar2 + 0xa0);
          }
          else {
            lVar4 = *(longlong *)
                     (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                     0xa0);
          }
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 == 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270710();
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar2 + 0xa8);
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0xa8);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
            lVar2 = *(longlong *)(lVar2 + 0xa8);
          }
          else {
            lVar2 = *(longlong *)
                     (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                     0xa8);
          }
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 == 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270900();
          }
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @012988e0 (841 bytes) — calculation

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = *this;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    lVar5 = *this;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0xa8);
  if (lVar5 != 0) {
    FUN_00d50b00();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar1 = _pthread_getspecific(param_1);
    lVar2 = local_50;
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar2 = *(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x100);
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = local_40;
    if ((pvVar1 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar3 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    lVar3 = *(longlong *)(lVar3 + 0x100);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != lVar3) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
    }
  }
  lVar2 = *this;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    lVar2 = *this;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar2 + 0xa0) != 0) {
    FUN_00d50b00();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar1 = _pthread_getspecific(param_1);
    lVar2 = local_50;
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar2 = *(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x100);
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = local_40;
    if ((pvVar1 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar3 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    lVar3 = *(longlong *)(lVar3 + 0x100);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != lVar3) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dffb0();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c39c50 (841 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *arg1;
  longlong this;
  longlong *plVar4;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*arg1 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(this + 0xb8);
    (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e0b40;
    if (DAT_027e0b40 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    pVar3 = 0x20;
    FUN_00e8b850(0x20,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar4 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_026d83d8;
    if (DAT_026d83d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e8b850(0x20,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c3a230 (831 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong *arg1;
  longlong this;
  longlong *plVar3;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (*arg1 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = (longlong *)(this + 0xb8);
    (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e0b40;
    if (DAT_027e0b40 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*plVar3 + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_026d83d8;
    if (DAT_026d83d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e8b9a0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01bfca80 (796 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *arg1;
  longlong *this;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_90;
  char local_88;
  longlong *local_48;
  char local_40;
  
  FUN_01d3a560();
  iVar6 = FUN_01d3b590();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(this + 0x20) = (uint)(iVar6 != 8) * 9 + 1;
  (**(code **)(*this + 0x3f8))();
  if (local_48 == (longlong *)0x0) {
    bVar3 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  if (this[0x1d] == *arg1) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(longlong *)*arg1 + 0x960))();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  cVar5 = (**(code **)(*local_48 + 0x50))();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (0 < *(int *)((longlong)plVar8 + 0xc))) {
    lVar7 = 0;
    bVar2 = false;
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(plVar8[2] + lVar7 * 8);
      if (lVar9 == lVar1) {
        lVar10 = lVar9;
        bVar4 = bVar2;
        if ((!bVar2) && (lVar1 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        lVar10 = lVar1;
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      if (this[0x1d] == *arg1) {
        FUN_01bfa490();
        FUN_01bf7000();
        FUN_00d46dc0();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_019b43b0();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar10;
    } while (lVar7 < *(int *)((longlong)plVar8 + 0xc));
    if ((bVar2) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b8ca00 (791 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *this;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  FUN_01b8ced0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8ca8c;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01b8ca8c:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8cb0d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01b8cb0d:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto LAB_01b8cc53;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b8cbef;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b8cb45:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar5 = &local_40;
    FUN_013dd6a0();
    plVar4 = local_40;
    if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 == (longlong *)0x0) {
      pplVar5 = &DAT_02802688;
      *(undefined1 *)(this + 1) = 0;
      plVar4 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01b8cbd9;
LAB_01b8cc18:
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *this = (longlong)plVar4;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar5 = &DAT_02802688;
      }
      *(undefined1 *)(this + 1) = 0;
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01b8cc18;
LAB_01b8cbd9:
      *this = (longlong)plVar4;
      *(undefined1 *)(this + 1) = 1;
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01b8cb45;
LAB_01b8cbef:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  FUN_00d50b20();
LAB_01b8cc53:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01c39580 (791 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *this;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  FUN_01c399a0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01c3960c;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01c3960c:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01c3968d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01c3968d:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto LAB_01c397d3;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01c3976f;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01c396c5:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar5 = &local_40;
    FUN_013dd6a0();
    plVar4 = local_40;
    if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 == (longlong *)0x0) {
      pplVar5 = &DAT_02802688;
      *(undefined1 *)(this + 1) = 0;
      plVar4 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01c39759;
LAB_01c39798:
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *this = (longlong)plVar4;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar5 = &DAT_02802688;
      }
      *(undefined1 *)(this + 1) = 0;
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01c39798;
LAB_01c39759:
      *this = (longlong)plVar4;
      *(undefined1 *)(this + 1) = 1;
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01c396c5;
LAB_01c3976f:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  FUN_00d50b20();
LAB_01c397d3:
  FUN_00d50b20();
  return;
}




// ==================================================
// @014d5a80 (789 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong **pplVar7;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  longlong *local_68;
  undefined1 local_60;
  longlong local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  float local_40;
  float local_3c;
  undefined8 *local_38;
  
  local_40 = param_1;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  local_38 = puVar3;
  (*DAT_02572370)();
  fVar10 = (float)(**(code **)(*arg1 + 0x3e0))();
  local_3c = fVar10;
  if (*param_2 != 0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_58 = *param_2;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    while( true ) {
      iVar2 = iStack_4c;
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          fVar10 = (float)FUN_00d23690(fVar10,iStack_4c);
          local_48 = local_48 + iVar2;
          iStack_4c = 0;
        }
      }
      lVar4 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= local_50) break;
      plVar9 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_68 = plVar9;
      if ((DAT_027c0170 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), fVar10 = extraout_XMM0_Da_02, iVar2 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        fVar10 = (float)___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar7 = &local_68;
        fVar10 = extraout_XMM0_Da;
        if (cVar1 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      plVar9 = *pplVar7;
      if ((plVar9 != (longlong *)0x0) && (plVar9 != arg1)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)pplVar7);
        pVar6 = (pthread_key_t)pplVar7;
        plVar8 = plVar9;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        fVar10 = extraout_XMM0_Da_00;
        if (cVar1 != '\0') {
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_014bc070();
          fVar10 = extraout_XMM0_Da_01;
          if (cVar1 == '\0') {
            pvVar5 = _pthread_getspecific(pVar6);
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
            fVar10 = (float)((uint)(fVar10 - local_3c) & _DAT_02390140);
            if (fVar10 < local_40) {
              fVar10 = (float)FUN_00d21140();
            }
          }
        }
      }
    }
    FUN_01481520();
  }
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01bfa490 (773 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong **pplVar4;
  longlong *this;
  longlong *plVar5;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  local_34 = DAT_02390124;
  if (*this == 0) {
    return DAT_02390124;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      return local_34;
    }
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) {
    return local_34;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01bfa5a5;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_01bfa5a5:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar4 = &local_48;
    FUN_013dd6a0();
    plVar5 = local_48;
    if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      param_1 = 0x10fe5c0;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      pplVar4 = &DAT_02802688;
      plVar5 = DAT_02802688;
      if (DAT_02802690 == '\0') goto LAB_01bfa653;
LAB_01bfa628:
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar4 = &DAT_02802688;
      }
      plVar5 = *pplVar4;
      if (*(char *)(pplVar4 + 1) != '\0') goto LAB_01bfa628;
LAB_01bfa653:
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      local_34 = DAT_02390124;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = FUN_014bc150();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01bfa6cf;
  }
  local_34 = DAT_02390124;
LAB_01bfa6cf:
  FUN_00d50b20();
  return local_34;
}




// ==================================================
// @012972e0 (740 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong arg1;
  longlong *plVar6;
  undefined8 *this;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(arg1 + 0xd8) == 0) {
LAB_0129739d:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0129739d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_0129739d;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_013dd6a0();
  plVar6 = local_40;
  if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02790158 = FUN_007ef2d0();
    _DAT_02790140 = "MUAudioSourcePrincipalItem";
    _DAT_02790148 = 0x138;
    param_1 = 0x10fe5c0;
    _DAT_02790150 = FUN_010fe5c0;
    _DAT_02790160 = 0;
    uRam0000000002790168 = 0;
    _DAT_02790170 = 0;
    uRam0000000002790178 = 0;
    _DAT_02790180 = 0;
    uRam0000000002790188 = 0;
    _DAT_02790190 = 0;
    uRam0000000002790198 = 0;
    _DAT_027901a0 = 0;
    uRam00000000027901a8 = 0;
    _DAT_027901b0 = 0;
    uRam00000000027901b8 = 0;
    _DAT_027901c0 = 0;
    uRam00000000027901c8 = 0;
    _DAT_027901d0 = 0;
    uRam00000000027901d8 = 0;
    _DAT_027901e0 = 0;
    uRam00000000027901e8 = 0;
    _DAT_027901f0 = 0;
    uRam00000000027901f8 = 0;
    _DAT_02790200 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_012973f4:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012973f4;
  }
  plVar6 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_012974f3:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d6130();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_012974eb;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
LAB_012974eb:
      FUN_00d50b20();
      goto LAB_012974f3;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a13460 (682 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong **pplVar7;
  longlong *arg1;
  longlong *this;
  longlong lVar8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_38 = puVar4;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        local_48 = plVar2;
        FUN_0006e1c0();
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar7 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)pplVar7);
          pVar6 = (pthread_key_t)pplVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar2 = local_48;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = local_58;
            local_40 = '\0';
            FUN_00d235a0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
    puVar4 = local_38;
  }
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    FUN_01f07b90();
  }
  else {
    FUN_01f07b90();
  }
  (**(code **)(*this + 0x678))();
  FUN_00d50b20();
  return;
}




// ==================================================
// @014d5e20 (670 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int in_ECX;
  undefined *puVar8;
  longlong lVar9;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
  lVar4 = (**(code **)(*arg1 + 0x380))();
  lVar5 = FUN_014bb590();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar9 = 0;
      do {
        plVar11 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8);
        if ((plVar11 != (longlong *)0x0) && (plVar11 != arg1)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
          plVar10 = plVar11;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar10 + 1000))();
          if (cVar2 != '\0') {
            pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
              plVar10 = plVar11;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
              if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < param_1) {
                pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                lVar7 = (**(code **)(*plVar11 + 0x380))();
                if (lVar7 < lVar5 + in_ECX) {
                  pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar7 = FUN_014bb590();
                  if (lVar4 - in_ECX < lVar7) {
                    FUN_00d21140();
                  }
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0135d960 (668 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *arg1;
  longlong this;
  undefined1 local_68 [8];
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  local_38 = *arg1;
  local_30 = '\0';
  uVar4 = FUN_00d23d70();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  FUN_013291f0();
  FUN_013297b0();
  local_38 = *arg1;
  local_30 = '\0';
  cVar3 = FUN_00d24090();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_0134b230();
  }
  local_38 = *arg1;
  local_30 = '\0';
  cVar3 = FUN_00d24090();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_0134ac00();
  }
  local_58 = *arg1;
  local_50 = '\0';
  FUN_0135dd30();
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_60 = 1;
  pVar7 = 1;
  FUN_01355320(1,local_68,0);
  lVar2 = local_38;
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_0141bab0();
    if (iVar5 != 3) goto LAB_0135db59;
  }
  else {
LAB_0135db59:
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') {
      if (lVar2 == 0) {
        return uVar4;
      }
      goto LAB_0135db87;
    }
  }
  if (*(int *)(lVar2 + 0xc) != 0) {
    FUN_013357a0();
  }
LAB_0135db87:
  FUN_00d50b20();
  return uVar4;
}




// ==================================================
// @01a13090 (667 bytes) — math_loop

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong **pplVar7;
  longlong *arg1;
  longlong lVar8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_38 = puVar4;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        local_48 = plVar2;
        FUN_0006e1c0();
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar7 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)pplVar7);
          pVar6 = (pthread_key_t)pplVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar2 = local_48;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = local_58;
            local_40 = '\0';
            FUN_00d235a0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
    puVar4 = local_38;
  }
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    FUN_01f06a80();
  }
  else {
    FUN_01f06a80();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a12270 (644 bytes) — calculation

{
  undefined1 auVar1 [16];
  longlong *this;
  longlong *plVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_XMM1_Qb;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_98;
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_58;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  undefined8 uVar13;
  
  plVar2 = (longlong *)this[0x48];
  uVar10 = param_2;
  if (plVar2 == (longlong *)0x0) {
    FUN_01a18460();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_01a18460();
      (**(code **)(*local_48 + 0x958))();
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
        if (local_30 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_30 = '\0';
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01d919a0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cf3f40();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x4d8))();
  uVar11 = uVar10;
  uVar17 = in_XMM1_Qb;
  uVar4 = FUN_01cf5cf0();
  (**(code **)(*this + 0xb00))();
  uVar12 = uVar11;
  (**(code **)(*local_38 + 0x4d8))();
  uVar13 = uVar12;
  fVar3 = (float)(**(code **)(*this + 0xb00))();
  fVar9 = (float)uVar13;
  (**(code **)(*this + 0xb00))();
  local_88 = (float)uVar12;
  uStack_84 = (uint)((ulonglong)uVar12 >> 0x20);
  uStack_80 = (uint)uVar17;
  uStack_7c = (uint)((ulonglong)uVar17 >> 0x20);
  local_98 = (float)uVar11;
  local_58 = (float)param_2;
  local_58 = (local_88 * local_98) / local_58;
  auVar6._0_4_ = _DAT_023945e0 & (uint)local_58;
  auVar6._4_4_ = _UNK_023945e4 & uStack_84;
  auVar6._8_4_ = _UNK_023945e8 & uStack_80;
  auVar6._12_4_ = _UNK_023945ec & uStack_7c;
  auVar7._4_12_ = SUB1612(auVar6 | _DAT_023945f0,4);
  auVar7._0_4_ = SUB164(auVar6 | _DAT_023945f0,0) + local_58;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15 = roundss(auVar14,auVar7,0xb);
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = uVar10;
  auVar8 = blendps(auVar1,auVar15,1);
  (**(code **)(*local_38 + 0x4e8))(auVar8._0_8_);
  auVar8._8_8_ = in_XMM0_Qb;
  auVar8._0_8_ = param_1;
  auVar16._4_12_ = auVar8._4_12_;
  local_58 = auVar15._0_4_;
  auVar16._0_4_ = (((float)param_1 - fVar3) / fVar9) * local_58;
  auVar15._8_8_ = extraout_XMM0_Qb;
  auVar15._0_8_ = uVar4;
  auVar8 = blendps(auVar15,auVar16,1);
  FUN_01cf5c80(auVar8._0_8_);
  dVar5 = (double)(**(code **)(*plVar2 + 0x378))();
  (**(code **)(*plVar2 + 0x3a0))((double)local_58 / dVar5);
  (**(code **)(*local_38 + 0x620))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bfba30 (639 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d4efa0();
    lVar1 = DAT_027e8870;
    if (DAT_027e8870 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_00e8b850(0x10,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((longlong *)(this + 0xb8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c3aae0 (627 bytes) — calculation

{
  double dVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong this;
  float fVar6;
  double dVar7;
  longlong local_48;
  char local_40;
  
  FUN_01c39580();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01c3ab24;
    }
  }
  else if (local_48 != 0) {
LAB_01c3ab24:
    FUN_01c399a0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        goto LAB_01c3ab5a;
      }
LAB_01c3abb5:
      uVar5 = 0;
    }
    else {
      if (local_48 == 0) goto LAB_01c3abb5;
LAB_01c3ab5a:
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = (pthread_key_t)local_48;
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          goto LAB_01c3abe2;
        }
LAB_01c3ac69:
        uVar5 = 0;
      }
      else {
        if (local_48 == 0) goto LAB_01c3ac69;
LAB_01c3abe2:
        FUN_01caeb00();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_48 >> 8),local_48 != 0);
        if ((local_48 != 0) && (param_2 != '\0')) {
          fVar6 = (float)(**(code **)(**(longlong **)(this + 0xd8) + 0x930))();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            param_1 = (pthread_key_t)local_48;
          }
          dVar7 = (double)(float)(~-(uint)(fVar6 <= 0.0) & (uint)fVar6);
          uVar2 = SUB84(DAT_0238fee8,0);
          if (dVar7 <= DAT_0238fee8) {
            uVar2 = SUB84(dVar7,0);
          }
          dVar7 = (double)FUN_012685b0(uVar2);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar1 = (double)FUN_013de950();
          uVar2 = FUN_00e7d850(SUB84(dVar7 / dVar1,0));
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          FUN_014bd010();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01c3ad42;
  }
  uVar5 = 0;
LAB_01c3ad42:
  return uVar5 & 0xffffffff;
}




// ==================================================
// @014d1e00 (598 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *arg1;
  longlong *this;
  longlong *local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this + 1000))();
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*this + 0x378))();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) goto LAB_014d1f09;
  (**(code **)(*this + 0x378))();
  lVar1 = *arg1;
  if (lVar1 == local_48) {
    if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_014d1ef5;
    if (local_40[0] == '\0') {
      FUN_00d50b00();
      goto LAB_014d1eee;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_014d1eee:
      local_50 = arg1 + 1;
      *(undefined1 *)local_50 = 1;
LAB_014d1ef5:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014d1f09;
    }
    *arg1 = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_50 = arg1 + 1;
  *(undefined1 *)local_50 = 1;
LAB_014d1f09:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this + 1000))();
  FUN_00d50b00();
  FUN_0134c2c0();
  FUN_00d50b20();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = (**(code **)(*this + 1000))();
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_0134c2c0();
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  FUN_014bb250();
  FUN_014bb2b0();
  return;
}




// ==================================================
// @013699d0 (575 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong arg1;
  undefined8 *this;
  longlong lVar7;
  longlong lVar8;
  longlong local_48;
  char local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c2f20();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014c2f80();
  lVar6 = *(longlong *)(arg1 + 0xe8);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c34a0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40 = '\0';
        FUN_00d21140();
        local_48 = lVar8;
      }
      lVar7 = lVar7 + 1;
      lVar6 = *(longlong *)(arg1 + 0xe8);
    } while (lVar7 < *(int *)(lVar6 + 0xc));
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01bfc3d0 (550 bytes) — math_loop

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong *this;
  longlong lVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  (**(code **)(*this + 0x3f8))();
  lVar5 = local_48;
  if (local_48 == 0) {
    bVar2 = 1;
    lVar5 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar2 = 0;
    bVar3 = true;
  }
  else {
    bVar2 = 0;
    bVar3 = true;
  }
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01bfbe60();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  FUN_01a13090();
  (**(code **)(*this + 0x3f8))();
  if (local_48 == lVar5) {
    if ((bool)(bVar2 & local_48 != 0)) {
      bVar4 = true;
      if (local_40 != '\0') goto LAB_01bfc570;
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar4 = true;
      lVar5 = local_48;
      if (bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01bfc570;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    lVar5 = local_48;
    if (!bVar3) goto LAB_01bfc570;
    FUN_00d50b20();
    bVar3 = true;
  }
  bVar4 = bVar3;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01bfc570:
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01bfba30();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  if (bVar4) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0129a650 (510 bytes) — math_loop

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong this;
  longlong local_38;
  char local_30;
  
  lVar4 = *(longlong *)(this + 0x48);
  while (lVar6 = lVar4, lVar6 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      lVar6 = *(longlong *)(this + 0x48);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    this = lVar6;
    lVar4 = *(longlong *)(lVar6 + 0x48);
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f9bb0();
  if (cVar1 != '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_012f9c10();
    return uVar5;
  }
  if (*(longlong *)(this + 0xd8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        goto LAB_0129a7ca;
      }
    }
    else if (local_38 != 0) {
LAB_0129a7ca:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_013d91b0();
      uVar5 = 0;
      if (cVar1 != '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_013d9210();
        uVar5 = (ulonglong)uVar2;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}




// ==================================================
// @0129a8a0 (510 bytes) — math_loop

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong this;
  longlong local_38;
  char local_30;
  
  lVar4 = *(longlong *)(this + 0x48);
  while (lVar6 = lVar4, lVar6 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      lVar6 = *(longlong *)(this + 0x48);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    this = lVar6;
    lVar4 = *(longlong *)(lVar6 + 0x48);
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f9bb0();
  if (cVar1 != '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_012f9c70();
    return uVar5;
  }
  if (*(longlong *)(this + 0xd8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        goto LAB_0129aa1a;
      }
    }
    else if (local_38 != 0) {
LAB_0129aa1a:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_013d91b0();
      uVar5 = 0;
      if (cVar1 != '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_013d9270();
        uVar5 = (ulonglong)uVar2;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}




// ==================================================
// @01a13aa0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b29a0 == 0) || (DAT_028b29a9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e1c40;
    if (DAT_028b29a0 == 0) {
      if (DAT_027e1c40 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b29a0;
      if (DAT_028b29a0 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b29a0 != 0;
        DAT_028b29a0 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b29a8 == '\0')) {
        DAT_028b29a8 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b29a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b29a9 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b29a0 == 0) {
      lVar3 = 0;
      goto LAB_01a13c59;
    }
  }
  lVar3 = DAT_028b29a0;
  FUN_00d50b00();
LAB_01a13c59:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c3b290 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b65c8 == 0) || (DAT_028b65d1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027eb4b0;
    if (DAT_028b65c8 == 0) {
      if (DAT_027eb4b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar2 = DAT_028b65c8;
      if (DAT_028b65c8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b65c8 != 0;
        DAT_028b65c8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b65d0 == '\0')) {
        DAT_028b65d0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b65d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b65d1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b65c8 == 0) {
      lVar3 = 0;
      goto LAB_01c3b449;
    }
  }
  lVar3 = DAT_028b65c8;
  FUN_00d50b00();
LAB_01c3b449:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



