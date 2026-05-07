// ===== MUAudioSourceAttackItem — Annotated small functions =====
// 14 readable functions

// ==================================================
// @013dfef0 (2820 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  pthread_key_t pVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char unaff_SIL;
  longlong this;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  double dVar15;
  double local_a8;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  double local_50;
  longlong *local_48;
  char local_40;
  
  FUN_013de560();
  plVar3 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    cVar4 = (**(code **)(*plVar13 + 0x3c8))();
    if (cVar4 != '\0') {
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      lVar8 = (**(code **)(*plVar13 + 0x3b0))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      lVar10 = (**(code **)(*plVar13 + 0x388))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      lVar11 = (**(code **)(*plVar13 + 0x390))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      lVar9 = (**(code **)(*plVar13 + 0x3b0))();
      local_50 = (double)lVar8 / (double)lVar10;
      if ((lVar11 < lVar9) || (DAT_023942d0 < local_50)) {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_0133aef0();
        if (this != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_50 <= DAT_023942d0) && (*(longlong *)(this + 0x50) == 0)) {
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x380))();
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        lVar10 = (**(code **)(*plVar13 + 0x3b0))();
        local_50 = (double)(lVar10 + lVar8);
        if (unaff_SIL == '\0') {
          if (*(longlong *)(this + 0x60) == 0) {
            dVar15 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_01327990();
          }
          pVar5 = FUN_00e7d850(dVar15 * _DAT_023944e0);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = 0;
          FUN_00d50b00();
          local_68 = '\x01';
          param_1 = 0;
          local_70 = this;
          FUN_0135d2e0(0,&local_70);
          plVar13 = local_48;
          if (local_48 == (longlong *)0x0) {
            bVar1 = true;
            bVar2 = false;
            plVar13 = (longlong *)0x0;
          }
          else {
            if (local_40 == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              bVar2 = true;
              if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_013e0820;
              FUN_00d50b20();
            }
            else {
              local_40 = '\0';
            }
            bVar2 = true;
            bVar1 = false;
          }
LAB_013e0820:
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (longlong *)0x0) {
            pvVar7 = _pthread_getspecific(param_1);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            lVar8 = (**(code **)(*plVar13 + 0x3a0))();
            lVar10 = (longlong)(int)pVar5;
            if (lVar8 <= (longlong)local_50 + lVar10) goto LAB_013e08a4;
            param_1 = pVar5;
            if (!bVar1) {
              FUN_00d50b20();
              param_1 = (pthread_key_t)lVar10;
            }
          }
        }
        else {
          if (*(longlong *)(this + 0x60) == 0) {
            local_a8 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (double)FUN_01327990();
          }
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_50 = (double)(longlong)local_50 / local_a8 + DAT_023b67d8;
          FUN_013671d0(DAT_0240d788 + local_50,DAT_0240d790 + local_50);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar5 = 0;
          FUN_01364d50(local_50,0);
          param_1 = pVar5;
          if (local_48 != (longlong *)0x0) {
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = true;
LAB_013e08a4:
            pvVar7 = _pthread_getspecific(pVar5);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = 0;
            FUN_00d50b00();
            local_58 = '\x01';
            local_60 = this;
            FUN_0135d2a0();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            param_1 = pVar5;
            if (bVar2) {
              FUN_00d50b20();
              param_1 = pVar5;
            }
          }
        }
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_0133aef0();
    if (this != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
    if (lVar8 < 1) goto LAB_013e0269;
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
  }
  else {
LAB_013e0269:
    lVar8 = 0;
  }
  if (*(longlong *)(this + 0x50) == 0) goto LAB_013e03fb;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar14 = &local_48;
  FUN_013dd6a0();
  plVar13 = local_48;
  if ((DAT_02790f20 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_013e030e:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_013e030e;
  }
  plVar13 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    plVar12 = plVar13;
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    lVar10 = (**(code **)(*plVar12 + 0x3a0))();
    lVar11 = FUN_013de650();
    if (lVar8 < lVar10 - lVar11) {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3a0))();
      FUN_013de650();
    }
    FUN_00d50b20();
  }
LAB_013e03fb:
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bcf30();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01334f30();
  if (cVar4 != '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bd190();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0128f850 (1936 bytes) — math_loop

{
  uint uVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *arg1;
  longlong *this;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong local_b8;
  char local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  longlong *local_60;
  char local_58;
  pthread_key_t local_48;
  
  plVar2 = local_60;
  plVar6 = (longlong *)*param_2;
  if (plVar6 == (longlong *)0x0) {
    *(undefined1 *)(this + 1) = 0;
    lVar4 = *arg1;
    if ((char)arg1[1] != '\0') {
      *this = lVar4;
      *(undefined1 *)(this + 1) = 1;
      *(undefined1 *)(arg1 + 1) = 0;
      return this;
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *this = lVar4;
    *(undefined1 *)(this + 1) = 1;
    return this;
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (longlong *)*arg1;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb4a0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  plVar6 = local_60;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  bVar9 = local_60 == (longlong *)0x0;
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      bVar10 = true;
      goto LAB_0128fd8c;
    }
    FUN_00d50b00();
  }
  bVar10 = local_60 == (longlong *)0x0;
  if ((local_60 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    while( true ) {
      lVar4 = (longlong)(int)local_48;
      local_48 = local_48 + 1;
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      param_1 = (longlong *)(ulonglong)uVar1;
      if ((int)uVar1 <= (int)local_48) break;
      local_60 = *(longlong **)(plVar2[2] + 8 + lVar4 * 8);
      if ((local_48 != 0) && (pVar5 = uVar1 - 1, local_48 != pVar5)) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar3 = _pthread_getspecific(pVar5);
        plVar6 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar3 = _pthread_getspecific(pVar5);
        plVar7 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        uVar12 = (**(code **)(*plVar7 + 0x380))(uVar11);
        (**(code **)(*plVar6 + 0x410))(uVar12,uVar11);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
    bVar10 = false;
    bVar9 = false;
  }
LAB_0128fd8c:
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  plVar6 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != (longlong *)0x0) {
    for (iVar8 = 0; iVar8 < *(int *)((longlong)local_60 + 0xc); iVar8 = iVar8 + 1) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      plVar6 = plVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
        plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faf20();
      (**(code **)(*plVar6 + 0x3b8))();
      FUN_013faee0();
    }
    FUN_01a81420();
  }
  *this = (longlong)plVar2;
  *(undefined1 *)(this + 1) = 1;
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar10) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0128e760 (1870 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong **pplVar10;
  int iVar11;
  longlong this;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  char local_58;
  longlong **local_50;
  undefined8 local_48;
  int local_40;
  
  if (*(longlong ***)(this + 0xe0) == (longlong **)0x0) {
    local_68 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_68 = 0;
    local_50 = *(longlong ***)(this + 0xe0);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          iVar11 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar11);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar11 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar11) break;
      plVar9 = local_50[2];
      local_60 = (longlong *)plVar9[lVar4 + 1];
      pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
      pVar8 = (pthread_key_t)plVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar9 = local_78;
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        plVar9 = local_78;
        uVar6 = 0;
        if ((DAT_02790f20 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
          _DAT_0272f7c8 = FUN_007ef2d0();
          _DAT_0272f7b0 = "MUAudioSourceAttackItem";
          _DAT_0272f7b8 = 0xe8;
          _DAT_0272f7c0 = FUN_007ef270;
          _DAT_0272f7d0 = 0;
          uRam000000000272f7d8 = 0;
          _DAT_0272f7e0 = 0;
          uRam000000000272f7e8 = 0;
          _DAT_0272f7f0 = 0;
          uRam000000000272f7f8 = 0;
          _DAT_0272f800 = 0;
          uRam000000000272f808 = 0;
          _DAT_0272f810 = 0;
          uRam000000000272f818 = 0;
          _DAT_0272f820 = 0;
          uRam000000000272f828 = 0;
          _DAT_0272f830 = 0;
          uRam000000000272f838 = 0;
          _DAT_0272f840 = 0;
          uRam000000000272f848 = 0;
          _DAT_0272f850 = 0;
          uRam000000000272f858 = 0;
          _DAT_0272f860 = 0;
          uRam000000000272f868 = 0;
          _DAT_0272f870 = 0;
          uVar6 = ___cxa_guard_release();
        }
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          uVar6 = FUN_00e85ea0();
          pplVar10 = &local_78;
          if ((char)uVar6 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar9 = *pplVar10;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            uVar6 = FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) goto LAB_0128ea56;
      }
    }
    plVar9 = (longlong *)0x0;
    pplVar10 = local_50;
LAB_0128ea56:
    param_1 = (pthread_key_t)pplVar10;
    FUN_0015edf0();
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0128eab0;
    }
LAB_0128eb39:
    bVar2 = true;
    bVar1 = true;
    dVar15 = DAT_023908c8;
joined_r0x0128ec0f:
    if (plVar9 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_014bb4b0();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0128ee8b;
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_0128eb39;
LAB_0128eab0:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar2 = false;
      bVar1 = false;
      dVar15 = DAT_023908c8;
      goto joined_r0x0128ec0f;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) && (FUN_00d50b00(), local_58 != '\0')
        ) && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_014bd180();
    dVar15 = DAT_023908c8;
    if (0 < lVar4) {
      pvVar5 = _pthread_getspecific(param_1);
      plVar12 = plVar3;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = (**(code **)(*plVar12 + 0x380))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013df730();
      dVar15 = (double)(lVar7 + lVar4) / dVar15;
      if (plVar9 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_014bacf0();
        if (dVar15 < dVar13) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_014bacf0();
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (NAN(dVar15)) {
      bVar2 = false;
      bVar1 = false;
      goto joined_r0x0128ec0f;
    }
  }
  if (!NAN(dVar15)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar14 = (double)FUN_013de9b0();
    if (DAT_023942d0 < (dVar15 - dVar13) / dVar14) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013de9b0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013de8d0();
      dVar15 = dVar13 * DAT_023942d0 + dVar15;
    }
  }
  FUN_00d50b20();
LAB_0128ee8b:
  if (((char)local_68 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return dVar15;
}




// ==================================================
// @0128f040 (1669 bytes) — calculation

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong this;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  double local_68;
  double local_58;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  FUN_0125e7c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_0128e760();
  if (NAN(dVar6)) {
    if (local_40 == 0) {
      return *(double *)(this + 0x150);
    }
    dVar6 = *(double *)(this + 0xf0);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de9b0();
    dVar6 = dVar6 / dVar7;
    local_68 = dVar6;
    if (*(longlong *)(this + 0xa8) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (*(longlong *)(this + 0xa8) == 0) {
          local_38 = '\0';
          local_40 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        lVar3 = local_40;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar3 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        dVar7 = *(double *)(lVar3 + 0xf0);
        if (*(longlong *)(this + 0xa8) == 0) {
          local_80 = '\0';
          local_88 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013de9b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_68 = dVar7 / dVar8;
      }
    }
    dVar7 = dVar6;
    if (dVar6 < DAT_0238fee8) {
      dVar7 = DAT_0238fee8 / dVar6;
    }
    bVar1 = dVar6 < DAT_0238fee8 && DAT_0238fee8 < local_68;
    dVar8 = local_68;
    if (local_68 < DAT_0238fee8) {
      bVar1 = bVar1 != dVar7 < DAT_0238fee8;
      dVar8 = DAT_0238fee8 / local_68;
    }
    if (bVar1) {
      dVar6 = dVar6 * local_68;
    }
    else {
      dVar6 = (double)(~-(ulonglong)(dVar7 < dVar8) & (ulonglong)local_68 |
                      (ulonglong)dVar6 & -(ulonglong)(dVar7 < dVar8));
    }
    local_58 = (DAT_0238fee8 / dVar6) * *(double *)(this + 0x150);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de8d0();
    local_58 = (double)FUN_0128e2f0(dVar6 - dVar7);
    dVar7 = local_58;
    if (local_40 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_014bd180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar10._0_8_ = FUN_013de3b0();
        auVar10._8_8_ = extraout_XMM0_Qb;
        if ((!NAN((float)auVar10._0_8_)) && (!NAN(*(float *)(this + 0xf8)))) {
          auVar11._4_12_ = auVar10._4_12_;
          auVar11._0_4_ = ((float)auVar10._0_8_ - *(float *)(this + 0xf8)) * DAT_023941f4;
          fVar5 = (float)_exp2f(auVar11._0_8_);
          fVar12 = DAT_02390d2c;
          if (fVar5 <= DAT_02390d2c) {
            fVar12 = fVar5;
          }
          fVar5 = DAT_0239426c;
          if (DAT_0239426c <= fVar12) {
            fVar5 = fVar12;
          }
          dVar7 = (double)fVar5 * local_58;
        }
      }
    }
    dVar7 = dVar7 / *(double *)(this + 0x150);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_014bb4b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    dVar9 = dVar8 - dVar6;
    if (_DAT_023944e0 <= dVar8 - dVar6) {
      dVar9 = _DAT_023944e0;
    }
    dVar9 = *(double *)(this + 0xf0) - dVar9;
    if (dVar7 <= dVar9) {
      dVar9 = dVar7;
    }
    if (dVar9 < 0.0) {
      dVar9 = *(double *)(this + 0xf0) / DAT_023b3bc0;
    }
    local_58 = local_58 / dVar9;
    if (local_40 == 0) {
      return local_58;
    }
  }
  FUN_00d50b20();
  return local_58;
}




// ==================================================
// @013e0cc0 (1652 bytes) — calculation

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  longlong this;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x58) != 0) {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_013e0d63;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_013e0d63:
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbe30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328650();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc570();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    FUN_013dfe00();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01334f30();
  if (cVar1 == '\0') {
    return;
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  cVar1 = (**(code **)(*plVar5 + 0x3c0))();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    cVar1 = (**(code **)(*plVar5 + 0x3c8))();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      cVar1 = (**(code **)(*plVar5 + 0x3d0))();
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014bc070();
        if (cVar1 == '\0') goto LAB_013e131a;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_007ef480();
  *puVar4 = &DAT_025fb6c8;
  pVar6 = 0x25fbb28;
  puVar4[7] = &DAT_025fbb28;
  (*DAT_025fb6e0)();
  plVar5 = (longlong *)FUN_00115860();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01329b30();
  FUN_013dfe00();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x380))();
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_014bb2b0();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_013e131a:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01290750 (1585 bytes) — math_loop

{
  bool bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_68;
  char local_60;
  int local_50;
  
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  plVar5 = (longlong *)*arg1;
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    plVar5 = (longlong *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  pVar7 = 0;
  dVar10 = (double)(**(code **)(*plVar5 + 0x380))(param_1);
  plVar5 = (longlong *)FUN_011114e0();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(_DAT_02391038,_DAT_02391038);
  if (local_68 == 0) {
    bVar1 = false;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_50 = -1;
    bVar1 = false;
    plVar6 = (longlong *)0x0;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      plVar8 = *(longlong **)(local_68 + 0x10);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faed0();
      pVar7 = (pthread_key_t)plVar8;
      if (param_1 <= dVar11) {
        if (plVar6 == (longlong *)0x0) {
          pvVar2 = _pthread_getspecific(pVar7);
          plVar6 = plVar5;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = plVar5;
            plVar6 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          pVar7 = (pthread_key_t)plVar8;
          (**(code **)(*plVar6 + 0x418))(param_1,dVar10);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          plVar6 = (longlong *)FUN_011114e0();
          (**(code **)(*plVar6 + 0x18))();
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013ef430(_DAT_02391038,_DAT_02391038);
          pvVar2 = _pthread_getspecific(pVar7);
          plVar8 = plVar6;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(0,0);
          bVar1 = true;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar2 = _pthread_getspecific(pVar7);
        plVar8 = plVar6;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(dVar11 - param_1,dVar14 - dVar10);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar7);
        plVar9 = plVar5;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = plVar5;
          plVar9 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pVar7 = (pthread_key_t)plVar8;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013faf20();
        (**(code **)(*plVar9 + 0x418))(uVar12,uVar13);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
  }
  FUN_00d21140();
  FUN_00d21140();
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this;
}




// ==================================================
// @007ee1b0 (1577 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong **pplVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar12 = FUN_007ec8d0();
  lVar5 = local_70;
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_007ee80d;
    uVar12 = FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_007ee80d;
  local_68 = '\0';
  local_70 = 0;
  local_60 = lVar5;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar10 = 0;
  while( true ) {
    if (iVar10 != 0) {
      if (iVar10 < 1) {
        iVar10 = -iVar10;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
        FUN_00d23690(uVar12,iVar10);
        local_50 = local_50 + iVar10;
        iVar10 = 0;
      }
      local_58 = CONCAT44(iVar10,(int)local_58);
    }
    lVar5 = (longlong)(int)local_58;
    iVar10 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar10);
    if (*(int *)(local_60 + 0xc) <= iVar10) break;
    lVar8 = *(longlong *)(local_60 + 0x10);
    local_70 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
    pVar7 = (pthread_key_t)lVar8;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_48 = plVar3;
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar3 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007ee400;
      }
LAB_007ee4b0:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = plVar3;
      local_98 = '\0';
      pVar7 = 0;
      uVar12 = FUN_0135d2e0(0,&local_a0);
      plVar11 = local_40;
      if (local_40 == (longlong *)0x0) {
        bVar2 = false;
        plVar11 = (longlong *)0x0;
      }
      else if (local_38 == '\0') {
        uVar12 = FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      bVar1 = true;
      if (plVar11 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_80 = plVar3;
        local_78 = '\0';
        local_90 = plVar11;
        uVar12 = FUN_01367c80();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        goto LAB_007ee700;
      }
      plVar11 = (longlong *)0x0;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_007ee4b0;
LAB_007ee400:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      plVar11 = local_40;
      if ((DAT_02790f20 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        _DAT_0272f7c8 = FUN_007ef2d0();
        _DAT_0272f7b0 = "MUAudioSourceAttackItem";
        _DAT_0272f7b8 = 0xe8;
        _DAT_0272f7c0 = FUN_007ef270;
        _DAT_0272f7d0 = 0;
        uRam000000000272f7d8 = 0;
        _DAT_0272f7e0 = 0;
        uRam000000000272f7e8 = 0;
        _DAT_0272f7f0 = 0;
        uRam000000000272f7f8 = 0;
        _DAT_0272f800 = 0;
        uRam000000000272f808 = 0;
        _DAT_0272f810 = 0;
        uRam000000000272f818 = 0;
        _DAT_0272f820 = 0;
        uRam000000000272f828 = 0;
        _DAT_0272f830 = 0;
        uRam000000000272f838 = 0;
        _DAT_0272f840 = 0;
        uRam000000000272f848 = 0;
        _DAT_0272f850 = 0;
        uRam000000000272f858 = 0;
        _DAT_0272f860 = 0;
        uRam000000000272f868 = 0;
        _DAT_0272f870 = 0;
        ___cxa_guard_release();
      }
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar9 = &local_40;
        if (cVar4 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      plVar11 = *pplVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar9 + 1) = 0;
        }
        bVar2 = true;
      }
      pVar7 = (pthread_key_t)pplVar9;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01367c80();
      bVar1 = false;
LAB_007ee700:
      if (!bVar1) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar2) && (plVar11 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_48;
    if (plVar3 != (longlong *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    iVar10 = local_58._4_4_;
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_007ee80d:
  FUN_007ebe20();
  return 1;
}




// ==================================================
// @0128d760 (1173 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  FUN_0125e7c0();
  if (local_60 == 0) {
    return 0xffffffff;
  }
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_60;
  }
  FUN_013dfdd0();
  plVar7 = local_70;
  if (local_60 == 0) {
    bVar3 = false;
    local_38 = 0;
    bVar9 = false;
    bVar1 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_58 = '\0';
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar1 = false;
LAB_0128d8a5:
      bVar9 = plVar7 != (longlong *)0x0;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d8a5;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar3 = true;
    local_38 = local_60;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = plVar7;
  bVar2 = bVar1;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
    goto joined_r0x0128db8b;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_60;
  }
  FUN_013dfcb0();
  if (local_60 != local_38) {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      if (local_60 == 0 || local_38 == 0) {
        bVar3 = true;
        local_38 = local_60;
      }
      else {
        FUN_00d50b20();
        bVar3 = true;
        local_38 = local_60;
      }
    }
    else {
      if (local_60 != 0 && local_38 != 0) {
        FUN_00d50b20();
      }
      local_58 = '\0';
      bVar3 = true;
      local_38 = local_60;
    }
  }
  if (local_38 == 0) {
    bVar9 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == plVar7) {
      if ((!bVar1) && (local_70 != (longlong *)0x0)) {
        bVar2 = true;
        if (local_68 != '\0') goto LAB_0128db16;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_0128db02:
      plVar8 = plVar7;
      bVar2 = bVar1;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_70;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_70;
          bVar1 = bVar2;
          goto LAB_0128db02;
        }
      }
      else {
        bVar2 = true;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128db16:
    bVar9 = plVar8 != (longlong *)0x0;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
  }
joined_r0x0128db8b:
  if ((bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar4;
}




// ==================================================
// @0128d130 (1166 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_0125e7c0();
  if (local_58 == 0) {
    return 0;
  }
  if (local_50 == '\0') {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_013dfdd0();
  plVar8 = local_68;
  if (local_58 == 0) {
    bVar2 = false;
    bVar9 = false;
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    lVar5 = 0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_50 = '\0';
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar1 = false;
LAB_0128d276:
      bVar9 = plVar8 != (longlong *)0x0;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d276;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar2 = true;
    lVar5 = local_58;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
    goto joined_r0x0128d540;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_013dfcb0();
  if (local_58 == lVar5) {
joined_r0x0128d4d7:
    if (lVar5 != 0) goto LAB_0128d3e0;
LAB_0128d4dd:
    bVar10 = false;
  }
  else {
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
        bVar2 = true;
        lVar5 = local_58;
        goto joined_r0x0128d4d7;
      }
    }
    else {
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
      }
      local_50 = '\0';
    }
    bVar2 = true;
    lVar5 = local_58;
    if (local_58 == 0) goto LAB_0128d4dd;
LAB_0128d3e0:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == plVar8) {
      bVar9 = bVar1;
      if ((!bVar1) && (local_68 != (longlong *)0x0)) {
        bVar9 = true;
        plVar7 = plVar8;
        if (local_60 != '\0') goto LAB_0128d4b8;
        FUN_00d50b00();
        bVar9 = true;
      }
LAB_0128d4a4:
      plVar7 = plVar8;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar1) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar8 = local_68;
          goto LAB_0128d4a4;
        }
      }
      else {
        bVar9 = true;
        if ((bVar1) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128d4b8:
    bVar10 = plVar7 != (longlong *)0x0;
    plVar8 = plVar7;
    bVar1 = bVar9;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
  }
  else {
    uVar3 = 0;
  }
joined_r0x0128d540:
  if ((bVar1) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar3;
}




// ==================================================
// @01102d50 (962 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_010ff5d0();
  *this = &DAT_025e6260;
  this[7] = &DAT_025e66c0;
  this[0x19] = 0;
  if (DAT_02790f20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272f7c8 = FUN_007ef2d0();
      _DAT_0272f7b0 = "MUAudioSourceAttackItem";
      _DAT_0272f7b8 = 0xe8;
      _DAT_0272f7c0 = FUN_007ef270;
      _DAT_0272f7d0 = 0;
      uRam000000000272f7d8 = 0;
      _DAT_0272f7e0 = 0;
      uRam000000000272f7e8 = 0;
      _DAT_0272f7f0 = 0;
      uRam000000000272f7f8 = 0;
      _DAT_0272f800 = 0;
      uRam000000000272f808 = 0;
      _DAT_0272f810 = 0;
      uRam000000000272f818 = 0;
      _DAT_0272f820 = 0;
      uRam000000000272f828 = 0;
      _DAT_0272f830 = 0;
      uRam000000000272f838 = 0;
      _DAT_0272f840 = 0;
      uRam000000000272f848 = 0;
      _DAT_0272f850 = 0;
      uRam000000000272f858 = 0;
      _DAT_0272f860 = 0;
      _uRam000000000272f868 = 0;
      _DAT_0272f870 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272f86b == '\0') {
    FUN_01103140();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x1a) = 0;
  if (DAT_02790f20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272f7c8 = FUN_007ef2d0();
      _DAT_0272f7b0 = "MUAudioSourceAttackItem";
      _DAT_0272f7b8 = 0xe8;
      _DAT_0272f7c0 = FUN_007ef270;
      _DAT_0272f7d0 = 0;
      uRam000000000272f7d8 = 0;
      _DAT_0272f7e0 = 0;
      uRam000000000272f7e8 = 0;
      _DAT_0272f7f0 = 0;
      uRam000000000272f7f8 = 0;
      _DAT_0272f800 = 0;
      uRam000000000272f808 = 0;
      _DAT_0272f810 = 0;
      uRam000000000272f818 = 0;
      _DAT_0272f820 = 0;
      uRam000000000272f828 = 0;
      _DAT_0272f830 = 0;
      uRam000000000272f838 = 0;
      _DAT_0272f840 = 0;
      uRam000000000272f848 = 0;
      _DAT_0272f850 = 0;
      uRam000000000272f858 = 0;
      _DAT_0272f860 = 0;
      _uRam000000000272f868 = 0;
      _DAT_0272f870 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272f86b == '\0') {
    FUN_011032b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0xd4) = 0;
  if (DAT_02790f20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272f7c8 = FUN_007ef2d0();
      _DAT_0272f7b0 = "MUAudioSourceAttackItem";
      _DAT_0272f7b8 = 0xe8;
      _DAT_0272f7c0 = FUN_007ef270;
      _DAT_0272f7d0 = 0;
      uRam000000000272f7d8 = 0;
      _DAT_0272f7e0 = 0;
      uRam000000000272f7e8 = 0;
      _DAT_0272f7f0 = 0;
      uRam000000000272f7f8 = 0;
      _DAT_0272f800 = 0;
      uRam000000000272f808 = 0;
      _DAT_0272f810 = 0;
      uRam000000000272f818 = 0;
      _DAT_0272f820 = 0;
      uRam000000000272f828 = 0;
      _DAT_0272f830 = 0;
      uRam000000000272f838 = 0;
      _DAT_0272f840 = 0;
      uRam000000000272f848 = 0;
      _DAT_0272f850 = 0;
      uRam000000000272f858 = 0;
      _DAT_0272f860 = 0;
      _uRam000000000272f868 = 0;
      _DAT_0272f870 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272f86b == '\0') {
    FUN_01103420();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0x1b) = 0;
  if (DAT_02790f20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272f7c8 = FUN_007ef2d0();
      _DAT_0272f7b0 = "MUAudioSourceAttackItem";
      _DAT_0272f7b8 = 0xe8;
      _DAT_0272f7c0 = FUN_007ef270;
      _DAT_0272f7d0 = 0;
      uRam000000000272f7d8 = 0;
      _DAT_0272f7e0 = 0;
      uRam000000000272f7e8 = 0;
      _DAT_0272f7f0 = 0;
      uRam000000000272f7f8 = 0;
      _DAT_0272f800 = 0;
      uRam000000000272f808 = 0;
      _DAT_0272f810 = 0;
      uRam000000000272f818 = 0;
      _DAT_0272f820 = 0;
      uRam000000000272f828 = 0;
      _DAT_0272f830 = 0;
      uRam000000000272f838 = 0;
      _DAT_0272f840 = 0;
      uRam000000000272f848 = 0;
      _DAT_0272f850 = 0;
      uRam000000000272f858 = 0;
      _DAT_0272f860 = 0;
      _uRam000000000272f868 = 0;
      _DAT_0272f870 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272f86b == '\0') {
    FUN_01103590();
    FUN_00e87980();
  }
  FUN_01103700();
  return;
}




// ==================================================
// @012902c0 (885 bytes) — math_loop

{
  void *pvVar1;
  char *pcVar2;
  pthread_key_t in_ECX;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong local_68;
  char local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  double local_40;
  char local_38 [8];
  
  local_40 = param_1;
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  local_38[0] = local_60[0];
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_013faed0();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_013faf20();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    if (0 < *(int *)(local_68 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013faed0();
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faf20();
        if (iVar3 == *(int *)(local_68 + 0xc) + -1) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90(local_40);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0(local_40);
        }
        else {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90((dVar6 * local_40) / dVar4);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0((dVar7 * local_40) / dVar5);
        }
        iVar3 = iVar3 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
      } while (iVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_01a81420();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019f5e40 (803 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong *arg1;
  longlong *this;
  double dVar10;
  double dVar11;
  
  plVar1 = (longlong *)*this;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f5e89:
    this = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5e89;
  }
  lVar2 = *this;
  lVar4 = this[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f5ede:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5ede;
  }
  lVar3 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f5fcd;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_014bb640();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_014bb640();
    uVar9 = 0xffffffff;
    if (0.0 <= dVar10 - dVar11) {
      uVar9 = (ulonglong)(0.0 < dVar10 - dVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f5fcd:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}




// ==================================================
// @019f61e0 (778 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong *arg1;
  longlong *this;
  float fVar10;
  float fVar11;
  
  plVar1 = (longlong *)*this;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f6229:
    this = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f6229;
  }
  lVar2 = *this;
  lVar4 = this[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f627e:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f627e;
  }
  lVar3 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f636a;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_014bae60();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_014bae60();
    uVar9 = 0xffffffff;
    if (0.0 <= fVar10 - fVar11) {
      uVar9 = (ulonglong)(0.0 < fVar10 - fVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f636a:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}




// ==================================================
// @0128de60 (518 bytes) — calculation

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 local_38;
  longlong local_30;
  char local_28;
  
  if (*(longlong *)(this + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_013dd130();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128df77;
    }
  }
  local_38 = *(undefined8 *)(this + 0xf0);
LAB_0128df77:
  plVar2 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar2;
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x410))(0,0);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar2 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar2 + 0x410))(*(undefined8 *)(this + 0xf0),local_38);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01265f70();
  FUN_00d50b20();
  return;
}



