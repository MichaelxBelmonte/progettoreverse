// ===== MUAudioSourceItem — Annotated small functions =====
// 9 readable functions
// Known properties: 1
//   bool            _suggestsSeparateComponentRenderers

// ==================================================
// @014ea210 (1110 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong this;
  longlong lVar16;
  undefined8 *puVar17;
  
  lVar13 = *param_3;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    lVar13 = *param_3;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar13 = *(longlong *)(lVar13 + 0x108);
  if ((lVar13 == 0) ||
     (FUN_00d50b00(), *(int *)(*(longlong *)(this + 0x108) + 0xc) != *(int *)(lVar13 + 0xc))) {
    FUN_00e828a0();
  }
  uVar1 = *(undefined4 *)(this + 0x80);
  lVar8 = FUN_00e83010();
  uVar6 = *(uint *)(*(longlong *)(this + 0x108) + 0xc);
  if (0 < (int)uVar6) {
    lVar16 = *(longlong *)(*(longlong *)(this + 0x108) + 0x10);
    if ((ulonglong)uVar6 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 4 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 8 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x10 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 0xc + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x18 + uVar14 * 8) + 0x14);
        uVar14 = uVar14 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar14);
    }
    if ((ulonglong)(uVar6 & 3) != 0) {
      uVar15 = 0;
      do {
        *(undefined4 *)(uVar14 * 4 + lVar8 + uVar15 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8 + uVar15 * 8) + 0x14);
        uVar15 = uVar15 + 1;
      } while ((uVar6 & 3) != uVar15);
    }
  }
  uVar6 = FUN_014ea7b0(param_1,param_2);
  uVar14 = (ulonglong)uVar6;
  if ((char)uVar6 != '\0') {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar12 = &DAT_02572358;
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    pcVar4 = DAT_025e74b8;
    pVar11 = (pthread_key_t)puVar12;
    if (*(int *)(lVar13 + 0xc) < 1) {
      bVar3 = false;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      lVar16 = 0;
      bVar3 = false;
      puVar17 = (undefined8 *)0x0;
      do {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_025e74a0;
        *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar10 + 0x2c) = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        *(undefined4 *)(puVar10 + 0xc) = 0;
        (*pcVar4)();
        if (puVar10 == puVar17) {
          puVar10 = puVar17;
          if (bVar3) {
            FUN_00d50b20();
            bVar5 = bVar3;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
          if ((bVar3) && (puVar17 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(lVar8 + lVar16 * 4);
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar8 + lVar16 * 4);
        FUN_00d21140();
        pVar11 = (pthread_key_t)puVar12;
        lVar16 = lVar16 + 1;
        puVar17 = puVar10;
      } while (lVar16 < *(int *)(lVar13 + 0xc));
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c2990();
    lVar8 = *param_3;
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *param_3;
      lVar16 = FUN_00e8b990();
      if (lVar16 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
      }
    }
    FUN_00d64850();
    *(undefined4 *)(lVar8 + 0x80) = uVar1;
    FUN_00d64910();
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar14 = CONCAT71((int7)((ulonglong)(lVar8 + 0x80) >> 8),(char)uVar6);
    if ((bVar3) && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  return uVar14 & 0xffffffff;
}




// ==================================================
// @014eccd0 (862 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int unaff_ESI;
  longlong *this;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float local_34;
  
  cVar3 = (**(code **)(*this + 1000))();
  local_34 = -NAN;
  iVar10 = -1;
  if (cVar3 != '\0') {
    lVar5 = **(longlong **)(this[0x21] + 0x10);
    iVar10 = -1;
    if (lVar5 != 0) {
      FUN_00d50b00();
      iVar10 = *(int *)(lVar5 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this + 1000))();
  if ((cVar3 != '\0') && (lVar5 = **(longlong **)(this[0x21] + 0x10), lVar5 != 0)) {
    FUN_00d50b00();
    local_34 = *(float *)(lVar5 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar10;
  lVar5 = this[0x21];
  iVar10 = *(int *)(lVar5 + 0xc);
  if (((int)uVar8 < iVar10) && (param_1 = param_1 - (int)local_34, -1 < param_1)) {
    uVar4 = 0;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar2 = iVar10 + -1;
    if (param_1 < iVar10) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar4 <= iVar2) {
        uVar9 = (ulonglong)uVar4;
        local_38 = 0.0;
        lVar6 = 0;
        local_34 = 0.0;
        bVar7 = false;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
        if (lVar5 == 0) goto LAB_014eceb8;
LAB_014ece10:
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar7) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_014ece35:
        bVar7 = true;
        fVar12 = *(float *)(lVar5 + 0x20);
        lVar6 = lVar5;
        do {
          fVar11 = 0.0;
          if (!NAN(fVar12)) {
            fVar11 = 0.0;
            fVar1 = *(float *)(lVar6 + 0x10);
            if (!NAN(fVar1)) {
              fVar11 = SQRT(fVar12 * *(float *)(lVar6 + 0x58)) * fVar1 * fVar1;
            }
          }
          local_34 = fVar11 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) {
LAB_014ed01c:
            if (!bVar7) {
              return fVar12;
            }
            FUN_00d50b20();
            return fVar12;
          }
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ece10;
LAB_014eceb8:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) goto code_r0x014ecec2;
          fVar12 = *(float *)(lVar5 + 0x20);
          lVar6 = lVar5;
        } while( true );
      }
    }
    else if ((int)uVar4 <= iVar2) {
      uVar9 = (ulonglong)uVar4;
      local_38 = 0.0;
      lVar6 = 0;
      local_34 = 0.0;
      bVar7 = false;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
      if (lVar5 == 0) goto LAB_014ecfd4;
LAB_014ecf40:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      if ((bVar7) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
LAB_014ecf65:
      bVar7 = true;
      fVar12 = *(float *)(lVar5 + 0x10);
      if (NAN(fVar12)) goto LAB_014ed014;
      do {
        fVar12 = *(float *)(lVar5 + 0x58) * fVar12 * fVar12;
        lVar6 = lVar5;
        while( true ) {
          local_34 = fVar12 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) goto LAB_014ed01c;
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(this[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ecf40;
LAB_014ecfd4:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) {
            FUN_00d50b00();
            goto LAB_014ecf65;
          }
          fVar12 = *(float *)(lVar5 + 0x10);
          if (!NAN(fVar12)) break;
LAB_014ed014:
          fVar12 = 0.0;
          lVar6 = lVar5;
        }
      } while( true );
    }
  }
  return 0.0;
code_r0x014ecec2:
  FUN_00d50b00();
  goto LAB_014ece35;
}




// ==================================================
// @014ec330 (844 bytes) — calculation
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *arg1;
  longlong *this;
  
  pVar7 = (pthread_key_t)param_1;
  plVar8 = (longlong *)*arg1;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar8 = (longlong *)*arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  cVar1 = (**(code **)(*plVar8 + 1000))();
  iVar3 = -1;
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    iVar3 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  iVar2 = FUN_014c2f80();
  if (iVar3 <= iVar2) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_014c2f80();
    cVar1 = (**(code **)(*this + 1000))();
    iVar3 = -1;
    if ((cVar1 != '\0') && (lVar6 = **(longlong **)(this[0x21] + 0x10), lVar6 != 0)) {
      FUN_00d50b00();
      iVar3 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
    if (iVar3 <= iVar2) {
      plVar8 = (longlong *)*arg1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar8 = (longlong *)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      cVar1 = (**(code **)(*plVar8 + 1000))();
      iVar2 = -1;
      iVar3 = -1;
      if (cVar1 != '\0') {
        lVar6 = **(longlong **)(plVar8[0x21] + 0x10);
        iVar3 = -1;
        if (lVar6 != 0) {
          FUN_00d50b00();
          iVar3 = *(int *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      cVar1 = (**(code **)(*this + 1000))();
      if ((cVar1 != '\0') && (lVar6 = **(longlong **)(this[0x21] + 0x10), lVar6 != 0)) {
        FUN_00d50b00();
        iVar2 = *(int *)(lVar6 + 0xc);
        FUN_00d50b20();
      }
      if (iVar2 < iVar3) {
        plVar8 = (longlong *)*arg1;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          plVar8 = (longlong *)*arg1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(plVar8[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      else {
        cVar1 = (**(code **)(*this + 1000))();
        uVar4 = 0xffffffff;
        if ((cVar1 != '\0') && (lVar6 = **(longlong **)(this[0x21] + 0x10), lVar6 != 0)) {
          FUN_00d50b00();
          uVar4 = *(undefined4 *)(lVar6 + 0xc);
          FUN_00d50b20();
        }
      }
      *param_2 = uVar4;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_014c2f80();
      iVar2 = FUN_014c2f80();
      if ((iVar3 < iVar2) && (pvVar5 = _pthread_getspecific(pVar7), pvVar5 != (void *)0x0)) {
        FUN_00e8b990();
      }
      uVar4 = FUN_014c2f80();
      *param_1 = uVar4;
      return 1;
    }
  }
  return 0;
}




// ==================================================
// @014ed8e0 (711 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  pthread_key_t pVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  pthread_key_t in_ECX;
  pthread_key_t *in_RDX;
  ulonglong uVar7;
  float *arg1;
  longlong this;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong local_58;
  char local_50;
  
  if (*(longlong *)(this + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar2 = *(int *)(local_58 + 0x18);
    iVar10 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar10 = iVar2;
    }
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar9 = *(longlong *)(this + 0x88);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = *(longlong *)(this + 0x88);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar13 = *(double *)(lVar9 + 0x50);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    lVar9 = *(longlong *)(local_58 + 0x10);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    dVar12 = (double)FUN_014bb3e0();
    iVar2 = 0;
    if (dVar12 < param_1) {
      dVar12 = (double)FUN_014bb3e0();
      iVar2 = FUN_00e7d850((param_1 - dVar12) * dVar13);
    }
    iVar10 = iVar10 >> 2;
    dVar12 = (double)FUN_014bb4b0();
    iVar3 = iVar10;
    if (param_2 < dVar12) {
      dVar12 = (double)FUN_014bb3e0();
      iVar3 = FUN_00e7d850(dVar13 * (param_2 - dVar12));
    }
    if (iVar10 < iVar3) {
      iVar3 = iVar10;
    }
    if (iVar2 < iVar3) {
      uVar7 = (ulonglong)iVar2;
      pVar1 = *in_RDX;
      fVar11 = *arg1;
      uVar8 = ~uVar7;
      uVar6 = (ulonglong)(uint)(iVar3 - iVar2) & 3;
      if ((iVar3 - iVar2 & 3U) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *arg1 = fVar11;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar8 + (longlong)iVar3) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *arg1 = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 4 + uVar7 * 4);
          *arg1 = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 8 + uVar7 * 4);
          *arg1 = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 0xc + uVar7 * 4);
          *arg1 = fVar11;
          uVar7 = uVar7 + 4;
        } while ((longlong)iVar3 != uVar7);
      }
      in_ECX = (pVar1 + iVar3) - iVar2;
      *in_RDX = in_ECX;
    }
    dVar13 = (double)FUN_014bb4b0();
    if ((dVar13 < param_2) && (*(longlong *)(this + 0x118) != 0)) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed8e0(param_1,param_2);
    }
  }
  return;
}




// ==================================================
// @014e9f00 (690 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *this;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  longlong local_38;
  char local_30;
  
  (**(code **)(*this + 0x378))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*this + 1000))();
  if (cVar4 == '\0') {
    lVar7 = (**(code **)(*this + 0x380))();
    lVar5 = (**(code **)(*this + 0x388))();
    lVar7 = lVar5 / 2 + lVar7;
  }
  else {
    lVar7 = this[0x21];
    iVar2 = *(int *)(lVar7 + 0xc);
    uVar13 = (ulonglong)iVar2;
    uVar11 = iVar2 / 2;
    uVar9 = (ulonglong)uVar11;
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (1 < (longlong)uVar13) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      if (uVar9 - 1 < 3) {
        fVar15 = 0.0;
        uVar10 = 0;
      }
      else {
        fVar15 = 0.0;
        uVar10 = 0;
        do {
          param_1 = *(ulonglong *)(lVar5 + 0x18 + uVar10 * 8);
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 8 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar10 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28);
          uVar10 = uVar10 + 4;
        } while ((uVar11 & 0xfffffffc) != uVar10);
      }
      if ((ulonglong)(uVar11 & 3) != 0) {
        param_1 = 0;
        do {
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8 + param_1 * 8) + 0x28);
          param_1 = param_1 + 1;
        } while ((uVar11 & 3) != param_1);
      }
    }
    uVar10 = (ulonglong)(int)uVar11;
    if ((int)uVar11 < iVar2) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      fVar14 = 0.0;
      param_1 = (ulonglong)(iVar2 - uVar11) & 3;
      uVar8 = param_1;
      uVar12 = uVar10;
      if ((iVar2 - uVar11 & 3) != 0) {
        do {
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 - 1;
          param_1 = 0;
        } while (uVar8 != 0);
      }
      if (2 < ~uVar10 + uVar13) {
        do {
          param_1 = *(ulonglong *)(lVar5 + 8 + uVar12 * 8);
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar12 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x18 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 4;
        } while (uVar13 != uVar12);
      }
    }
    if ((fVar15 < fVar14) && ((int)uVar11 < (int)(uVar13 - 1))) {
      uVar10 = uVar10 + 1;
      do {
        param_1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + -8 + uVar10 * 8);
        fVar14 = fVar14 - *(float *)(param_1 + 0x28);
        fVar15 = fVar15 + *(float *)(param_1 + 0x28);
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if (fVar14 <= fVar15) break;
        param_1 = uVar10 + 1;
        bVar3 = (longlong)uVar10 < (longlong)(uVar13 - 1);
        uVar10 = param_1;
      } while (bVar3);
    }
    if ((fVar14 < fVar15) && (0 < (int)uVar9)) {
      do {
        fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar9 * 8) + 0x28);
        fVar14 = fVar14 + fVar1;
        fVar15 = fVar15 - fVar1;
        param_1 = uVar9;
        if (fVar15 <= fVar14) break;
        bVar3 = 1 < (longlong)uVar9;
        param_1 = uVar9 - 1;
        uVar9 = uVar9 - 1;
      } while (bVar3);
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_0134c2c0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return lVar7;
}




// ==================================================
// @014ec6b0 (540 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong arg1;
  undefined8 *this;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8) != arg1) {
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_014bb920();
          if (((*(int *)(arg1 + 0x98) == 0) || (uVar5 >> 0x20 == 0)) ||
             (cVar2 = FUN_00e7c000(), cVar2 == '\0')) {
            dVar8 = (double)FUN_014bb3e0();
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_014bb3e0();
            if ((double)((ulonglong)(dVar8 - dVar9) & _DAT_023908f0) < param_1) {
              FUN_00d21140();
            }
          }
          else {
            FUN_00d21140();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @014ed100 (528 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *this;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  
  cVar1 = (**(code **)(*this + 1000))();
  local_34 = -1;
  iVar7 = -1;
  if (cVar1 != '\0') {
    lVar6 = **(longlong **)(this[0x21] + 0x10);
    iVar7 = -1;
    if (lVar6 != 0) {
      FUN_00d50b00();
      iVar7 = *(int *)(lVar6 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar1 = (**(code **)(*this + 1000))();
  if ((cVar1 != '\0') && (lVar6 = **(longlong **)(this[0x21] + 0x10), lVar6 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar7;
  iVar7 = *(int *)(this[0x21] + 0xc);
  if (((int)uVar8 < iVar7) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    iVar2 = iVar7 + -1;
    if (param_1 < iVar7) {
      iVar2 = param_1;
    }
    if ((int)uVar5 <= iVar2) {
      uVar3 = (ulonglong)(iVar2 + 1U);
      uVar4 = (ulonglong)uVar5 + 1;
      if (uVar4 != uVar3) {
        uVar8 = iVar2 + 1U + ~uVar5;
        if ((uVar8 & 3) != 0) {
          lVar6 = -((ulonglong)uVar8 & 3);
          do {
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (2 < (uVar3 - uVar5) - 2) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar3 != uVar4);
        }
      }
    }
  }
  return;
}




// ==================================================
// @014ec110 (513 bytes) — math_loop
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int unaff_ESI;
  longlong *this;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_34;
  
  cVar3 = (**(code **)(*this + 1000))();
  local_34 = -1;
  iVar8 = -1;
  if (cVar3 != '\0') {
    lVar4 = **(longlong **)(this[0x21] + 0x10);
    iVar8 = -1;
    if (lVar4 != 0) {
      FUN_00d50b00();
      iVar8 = *(int *)(lVar4 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*this + 1000))();
  if ((cVar3 != '\0') && (lVar4 = **(longlong **)(this[0x21] + 0x10), lVar4 != 0)) {
    FUN_00d50b00();
    local_34 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
  }
  uVar7 = param_2 - iVar8;
  lVar4 = this[0x21];
  iVar8 = *(int *)(lVar4 + 0xc);
  fVar9 = 0.0;
  if (((int)uVar7 < iVar8) && (param_1 = param_1 - local_34, -1 < param_1)) {
    uVar5 = 0;
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    iVar2 = iVar8 + -1;
    if (param_1 < iVar8) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar5 <= iVar2) {
        uVar6 = (ulonglong)uVar5;
        fVar9 = 0.0;
        while( true ) {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8);
          fVar11 = *(float *)(lVar4 + 0x10);
          if (!NAN(fVar11)) {
            fVar1 = *(float *)(lVar4 + 0x20);
            if (!NAN(fVar1)) {
              fVar11 = fVar11 + DAT_0240e328;
              fVar10 = DAT_0239425c;
              if (DAT_0239425c <= fVar11) {
                fVar10 = fVar11;
              }
              fVar9 = fVar9 + (float)(~-(uint)(fVar1 <= DAT_02394270) &
                                      (uint)SQRT(fVar1) & _DAT_02390140 |
                                     -(uint)(fVar1 <= DAT_02394270) & DAT_023b3e04) *
                              fVar10 * fVar10;
            }
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar6) break;
          lVar4 = this[0x21];
          uVar6 = uVar6 + 1;
        }
      }
    }
    else if ((int)uVar5 <= iVar2) {
      uVar6 = (ulonglong)uVar5;
      fVar9 = 0.0;
      while( true ) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar6 * 8);
        fVar11 = *(float *)(lVar4 + 0x10);
        if ((!NAN(fVar11)) && (fVar1 = *(float *)(lVar4 + 0x20), !NAN(fVar1))) {
          fVar11 = fVar11 + DAT_0240e328;
          fVar10 = DAT_0239425c;
          if (DAT_0239425c <= fVar11) {
            fVar10 = fVar11;
          }
          fVar9 = fVar9 + fVar10 * fVar1;
        }
        if ((ulonglong)(iVar2 + 1) - 1 == uVar6) break;
        lVar4 = this[0x21];
        uVar6 = uVar6 + 1;
      }
    }
  }
  return fVar9;
}




// ==================================================
// @011039c0 (504 bytes) — calculation
// Known properties of MUAudioSourceItem:
// _suggestsSeparateComponentRenderers

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025d9310;
  this[7] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponent";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  this[8] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103d00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  this[9] = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01103df0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceComponents";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  *(undefined1 *)(this + 10) = 0;
  lVar9 = FUN_001156b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791348 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791310 = FUN_001156b0();
        _DAT_02791308 = "_suggestsSeparateComponentRenderers";
        _DAT_02791318 = 0;
        _DAT_02791320 = 0x6200;
        _DAT_02791328 = "bool";
        _DAT_02791330 = 0;
        uRam0000000002791338 = 0;
        _DAT_02791340 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



