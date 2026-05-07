// ===== MUPitchSystemRulerView — Annotated small functions =====
// 9 readable functions

// ==================================================
// @019f1a30 (2376 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  pthread_key_t pVar13;
  int iVar14;
  longlong *arg1;
  longlong *this;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  bVar3 = true;
  if (((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) &&
     (cVar7 = (**(code **)(&UNK_000015d8 + *this))(), cVar7 != '\0')) {
    bVar3 = *(int *)(this[0x3d] + 0xc) < 2;
  }
  FUN_0199e1b0();
  FUN_00d216c0();
  (**(code **)(*this + 0xaa8))();
  FUN_00d21370();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    return;
  }
  FUN_00323290();
  plVar4 = local_70;
  if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  cVar7 = FUN_019a9840();
  plVar1 = (longlong *)*arg1;
  if (cVar7 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = plVar1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar14 = -local_58._4_4_;
          }
          else {
            iVar14 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar14);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar14 = 0;
          }
          local_58 = CONCAT44(iVar14,(int)local_58);
        }
        lVar8 = (longlong)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar14) break;
        local_70 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)local_60[2]);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar1 = (longlong *)CONCAT71(uStack_7f,local_80);
        if (local_78 == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
  }
  else if (plVar1 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = plVar1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar14 = -local_58._4_4_;
        }
        else {
          iVar14 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar14 = 0;
        }
        local_58 = CONCAT44(iVar14,(int)local_58);
      }
      lVar8 = (longlong)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar14) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)local_60[2]);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      plVar1 = local_48;
      local_80 = local_40[0];
      pcVar10 = &local_80;
      pcVar12 = local_40;
      if (local_40[0] == '\0') {
        pcVar12 = pcVar10;
      }
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)pcVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      local_38[0] = local_40[0];
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar10 = &DAT_02572358;
  *puVar11 = &DAT_02572358;
  (*DAT_02572370)();
  cVar7 = FUN_019a9840();
  if (cVar7 == '\0') {
    (**(code **)(*this + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f222b;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_019f222b:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (pthread_key_t)pcVar10;
          plVar2 = *(longlong **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = plVar5;
          cVar7 = FUN_00d23d70();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar7 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar2;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
      goto LAB_019f23b7;
    }
  }
  else {
    (**(code **)(*this + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f1f4a;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_019f1f4a:
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (pthread_key_t)pcVar10;
          plVar2 = *(longlong **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar13 = (pthread_key_t)pcVar10;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          plVar6 = local_48;
          local_80 = local_40[0];
          pcVar10 = &local_80;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (longlong *)0x0) {
            local_40[0] = '\0';
            local_48 = plVar5;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_40[0] = '\0';
            local_48 = plVar6;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_80 != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
LAB_019f23b7:
      if (puVar11 == (undefined8 *)0x0) goto LAB_019f23cb;
    }
  }
  FUN_00d50b20();
LAB_019f23cb:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019f2c90 (1874 bytes) — math_loop

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *arg1;
  undefined8 *this;
  int iVar7;
  int local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  puVar6 = (undefined *)*arg1;
  if (puVar6 != (undefined *)0x0) {
    local_78 = -1;
    while (local_78 = local_78 + 1, local_78 < *(int *)(puVar6 + 0xc)) {
      pVar4 = (pthread_key_t)*(undefined8 *)(puVar6 + 0x10);
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    puVar5 = puVar6;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar7 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        local_48 = '\0';
        local_50 = local_40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00d242c0();
  *this = puVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @019ef560 (1612 bytes) — math_loop

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  int unaff_ESI;
  int iVar9;
  longlong *this;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qa;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if (unaff_ESI == 0) {
LAB_019ef68b:
    uVar2 = 0;
    local_70 = (longlong *)0x0;
    plVar8 = (longlong *)this[0x89];
joined_r0x019ef69f:
    if (plVar8 != (longlong *)0x0) {
      local_58 = 0;
      uVar2 = FUN_00d50b00();
    }
    local_58 = '\0';
    local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    plVar10 = (longlong *)0x0;
    local_88 = plVar8;
    local_60 = plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_019ef670;
LAB_019ef6c2:
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_50 = local_88;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar3 = (longlong)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
      local_b8 = *(longlong **)(local_50[2] + 8 + lVar3 * 8);
      local_b0 = '\0';
      local_60 = local_b8;
      (**(code **)(*this + 0xab0))(local_50[2],&local_b8);
      plVar8 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x9b0))(DAT_02390124);
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if ((char)local_64 != '\0') goto LAB_019ef681;
LAB_019ef80d:
    local_58 = '\0';
    local_60 = plVar10;
    FUN_00d243f0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar2 = (**(code **)(*this + 0x9b8))(DAT_023944d8 + param_1,_DAT_023944e0);
    plVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_019ef68b;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (longlong *)0x0) {
      plVar8 = (longlong *)this[0x89];
      local_70 = local_60;
      goto joined_r0x019ef69f;
    }
    FUN_00550890();
    plVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = '\0';
    }
    local_64 = 0;
    local_70 = plVar10;
    local_88 = plVar8;
    if (plVar8 != (longlong *)0x0) goto LAB_019ef6c2;
LAB_019ef670:
    if ((char)local_64 == '\0') goto LAB_019ef80d;
LAB_019ef681:
    FUN_00d216c0();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this + 0x20))();
  cVar1 = (**(code **)(*local_60 + 0x50))();
  uVar2 = extraout_XMM0_Qa;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar2 = FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    plVar10 = (longlong *)this[0x89];
    if ((int)this[0x8a] == 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((longlong)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_a8 = *(longlong **)(plVar10[2] + lVar3 * 8);
          local_a0 = '\0';
          local_60 = local_a8;
          uVar2 = (**(code **)(*this + 0xab0))(uVar2,&local_a8);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_78;
          if (local_78[0] == '\0') {
            pcVar6 = local_38;
          }
          *pcVar6 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((plVar8 != (longlong *)0x0) &&
             (uVar2 = (**(code **)(*plVar8 + 0x9b0))(DAT_02390124), local_38[0] != '\0')) {
            uVar2 = FUN_00d50b20();
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((longlong)plVar10 + 0xc));
      }
    }
    else {
      if (plVar10 == (longlong *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((longlong)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_98 = *(longlong **)(plVar10[2] + lVar3 * 8);
          local_90 = '\0';
          local_60 = local_98;
          uVar2 = (**(code **)(*this + 0xab0))(uVar2,&local_98);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_38;
          pcVar4 = local_78;
          if (local_78[0] == '\0') {
            pcVar4 = pcVar6;
          }
          *pcVar4 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          pVar7 = (pthread_key_t)pcVar6;
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar11 = (double)FUN_0125a280();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_01264170();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_01264170();
            uVar2 = (**(code **)(*plVar8 + 0x9b0))((float)((dVar12 - (param_1 - dVar11)) / dVar13));
            if (local_38[0] != '\0') {
              uVar2 = FUN_00d50b20();
            }
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((longlong)plVar10 + 0xc));
      }
    }
    FUN_001159b0();
  }
LAB_019efb98:
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019f1280 (1318 bytes) — calculation

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *arg1;
  longlong *this;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((longlong *)this[0x97] == (longlong *)0x0) {
    if (*arg1 == 0) {
      return;
    }
    lVar6 = 0;
LAB_019f13c6:
    lVar5 = 0;
    lVar4 = *arg1;
    if (lVar4 == 0) goto joined_r0x019f1511;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)this[0x97] + 0x50))();
    bVar7 = true;
    if (cVar3 != '\0') {
      if (this[0x97] == 0) {
        bVar7 = *arg1 != 0;
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar7) {
      return;
    }
    lVar6 = this[0x97];
    if (lVar6 == 0) goto LAB_019f13c6;
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this + 0x938))();
    auVar12._0_4_ = _DAT_023945e0 & (uint)(float)uVar9;
    auVar12._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar9 >> 0x20);
    auVar12._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
    auVar12._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar11._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
    auVar11._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + (float)uVar9;
    auVar12 = roundss(auVar11,auVar11,0xb);
    auVar10._8_8_ = extraout_XMM0_Qb;
    auVar10._0_8_ = uVar8;
    auVar10 = blendps(auVar10,auVar12,1);
    in_XMM1 = blendps(in_XMM1,_DAT_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,in_XMM1._0_8_,DAT_02390d34);
    (**(code **)(*this + 0x618))();
    lVar5 = this[0x97];
    lVar4 = *arg1;
    if (lVar5 == lVar4) goto joined_r0x019f1511;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  this[0x97] = lVar4;
  bVar7 = lVar5 != 0;
  lVar5 = lVar4;
  if (bVar7) {
    FUN_00d50b20();
    lVar5 = this[0x97];
  }
joined_r0x019f1511:
  if (lVar5 == 0) {
    if ((*(float *)(this + 0x98) != 0.0) || (NAN(*(float *)(this + 0x98)))) {
      *(undefined4 *)(this + 0x98) = 0;
    }
  }
  else {
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this + 0x938))();
    auVar13._0_4_ = _DAT_023945e0 & (uint)(float)uVar9;
    auVar13._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar9 >> 0x20);
    auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
    auVar13._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    auVar14._4_12_ = SUB1612(auVar13 | _DAT_023945f0,4);
    auVar14._0_4_ = SUB164(auVar13 | _DAT_023945f0,0) + (float)uVar9;
    auVar10 = roundss(auVar14,auVar14,0xb);
    auVar1._8_8_ = extraout_XMM0_Qb_01;
    auVar1._0_8_ = uVar8;
    auVar10 = blendps(auVar1,auVar10,1);
    auVar12 = blendps(in_XMM1,_DAT_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,auVar12._0_8_,DAT_02390d34);
    (**(code **)(*this + 0x618))();
    if (lVar6 == 0) {
      FUN_00d50b00();
      local_b0 = DAT_027e14b8;
      if (DAT_027e14b8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      FUN_00d46dc0();
      lVar6 = local_90;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_00d46dc0();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_01f981c0(DAT_02420b10,&local_b0,&local_50,2);
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_01f97770();
      local_a0 = plVar2;
      local_98 = '\0';
      FUN_01f979c0();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @019f4110 (1224 bytes) — calculation

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  char *pcVar4;
  longlong *this;
  undefined8 unaff_R15;
  ulonglong uVar5;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 1) {
    (**(code **)(*this + 0xe20))();
    FUN_00d23310();
    pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_48 == 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      uVar5 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),local_98 == 0);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar5 = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar5 == '\0') {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d50b00();
        FUN_01a43090(&stack0xffffffffffffff78,&local_c8);
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    uVar5 = uVar5 ^ 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}




// ==================================================
// @019f3af0 (936 bytes) — math_loop

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined *puVar5;
  longlong *in_RDX;
  longlong *arg1;
  undefined8 *this;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  
  dVar7 = (double)(**(code **)(*arg1 + 0xa50))();
  if (((char)arg1[0x9f] != '\0') || (cVar2 = FUN_019a9840(), cVar2 == '\0')) {
    (**(code **)(*arg1 + 0x9b8))(dVar7,param_2);
    return this;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (*in_RDX == 0) {
    (**(code **)(*arg1 + 0x988))();
    if (local_78 == 0) goto LAB_019f3e9e;
    bVar1 = true;
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_000ba510();
    if (local_78 == 0) {
      bVar1 = false;
    }
    else if (local_70 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      param_2 = param_2 + dVar7;
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f7cb0();
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_012f9490();
        if ((dVar8 <= param_2) && (dVar7 <= dVar9)) {
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = dVar7;
          if (dVar7 <= dVar8) {
            dVar10 = dVar8;
          }
          dVar8 = param_2;
          if (dVar9 <= param_2) {
            dVar8 = dVar9;
          }
          FUN_012e9900(dVar10,dVar8 - dVar10);
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          FUN_00d214d0();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_78 + 0xc));
    }
    FUN_000be170();
    *this = puVar3;
    *(undefined1 *)(this + 1) = 1;
    if (!bVar1) {
      return this;
    }
    FUN_00d50b20();
    return this;
  }
LAB_019f3e9e:
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @019f0970 (669 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined1 unaff_SIL;
  longlong *this;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*this + 0x970))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(&DAT_000015c0 + *this))();
  (**(code **)(*plVar1 + 0x958))(*plVar1,unaff_SIL);
  pplVar5 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  if ((DAT_027366a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026f9768 = FUN_0006d940();
    _DAT_026f9750 = "MUPitchSystemRulerView";
    _DAT_026f9758 = 0x168;
    _DAT_026f9760 = FUN_002757e0;
    _DAT_026f9770 = 0;
    uRam00000000026f9778 = 0;
    _DAT_026f9780 = 0;
    _DAT_026f97f8 = 0;
    uRam00000000026f9800 = 0;
    _DAT_026f9808 = 0;
    DAT_026f980a = 1;
    _DAT_026f9788 = 0;
    uRam00000000026f9790 = 0;
    _DAT_026f9798 = 0;
    uRam00000000026f97a0 = 0;
    _DAT_026f97a8 = 0;
    uRam00000000026f97b0 = 0;
    _DAT_026f97b8 = 0;
    uRam00000000026f97c0 = 0;
    _DAT_026f97c8 = 0;
    uRam00000000026f97d0 = 0;
    _DAT_026f97d8 = 0;
    uRam00000000026f97e0 = 0;
    _DAT_026f97e8 = 0;
    uRam00000000026f97f0 = 0;
    DAT_026f9813 = 0;
    _DAT_026f980b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f0a32:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019f0a32;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0xa28))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_019f0b23;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x928))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != plVar2) {
      (**(code **)(*plVar1 + 0x930))();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_019f0b23:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @00810180 (555 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1a8;
  longlong local_1a0;
  
  if ((DAT_027366a0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f9768 = FUN_0006d940();
    _DAT_026f9750 = "MUPitchSystemRulerView";
    _DAT_026f9758 = 0x168;
    _DAT_026f9760 = FUN_002757e0;
    _DAT_026f9770 = 0;
    uRam00000000026f9778 = 0;
    _DAT_026f9780 = 0;
    _DAT_026f97f8 = 0;
    uRam00000000026f9800 = 0;
    _DAT_026f9808 = 0;
    DAT_026f980a = 1;
    _DAT_026f9788 = 0;
    uRam00000000026f9790 = 0;
    _DAT_026f9798 = 0;
    uRam00000000026f97a0 = 0;
    _DAT_026f97a8 = 0;
    uRam00000000026f97b0 = 0;
    _DAT_026f97b8 = 0;
    uRam00000000026f97c0 = 0;
    _DAT_026f97c8 = 0;
    uRam00000000026f97d0 = 0;
    _DAT_026f97d8 = 0;
    uRam00000000026f97e0 = 0;
    _DAT_026f97e8 = 0;
    uRam00000000026f97f0 = 0;
    DAT_026f9813 = 0;
    _DAT_026f980b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f980b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00839940();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    if (local_1a8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}




// ==================================================
// @019f2910 (537 bytes) — calculation

{
  char unaff_SIL;
  longlong *this;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if ((char)this[0x9a] != unaff_SIL) {
    *(char *)(this + 0x9a) = unaff_SIL;
    if (unaff_SIL == '\0') {
      FUN_00d46dc0(0);
      local_40 = local_30;
      local_38 = 0;
      local_60 = DAT_027e14c0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_60 = DAT_027e14c0;
        }
      }
      else {
        local_28 = '\0';
      }
      local_38 = '\x01';
      DAT_027e14c0 = local_60;
      if (local_60 != 0) {
        local_38 = '\x01';
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*this + 0x408))(&local_60,&local_40);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (this[0x9e] != 0) {
        this[0x9e] = 0;
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      local_50 = local_30;
      local_48 = 0;
      local_70 = DAT_027e14c0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_70 = DAT_027e14c0;
        }
      }
      else {
        local_28 = '\0';
      }
      local_48 = '\x01';
      DAT_027e14c0 = local_70;
      if (local_70 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*this + 0x408))(&local_70,&local_50);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this + 0x620))();
  }
  return;
}



