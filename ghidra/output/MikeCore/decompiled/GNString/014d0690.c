// Function: FUN_014d0690
// Address: 014d0690
// Size: 3296 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x014d126c) */
/* WARNING: Removing unreachable block (ram,0x014d1278) */
/* WARNING: Removing unreachable block (ram,0x014d12aa) */
/* WARNING: Removing unreachable block (ram,0x014d12b6) */
/* WARNING: Removing unreachable block (ram,0x014d0cc7) */
/* WARNING: Removing unreachable block (ram,0x014d0cd0) */
/* WARNING: Removing unreachable block (ram,0x014d0bb4) */
/* WARNING: Removing unreachable block (ram,0x014d0bbd) */
/* WARNING: Removing unreachable block (ram,0x014d0abd) */
/* WARNING: Removing unreachable block (ram,0x014d0ac6) */
/* WARNING: Removing unreachable block (ram,0x014d07c3) */
/* WARNING: Removing unreachable block (ram,0x014d07cc) */
/* WARNING: Removing unreachable block (ram,0x014d0a27) */
/* WARNING: Removing unreachable block (ram,0x014d0a30) */
/* WARNING: Removing unreachable block (ram,0x014d0b4b) */
/* WARNING: Removing unreachable block (ram,0x014d0b54) */
/* WARNING: Removing unreachable block (ram,0x014d0c38) */
/* WARNING: Removing unreachable block (ram,0x014d0c41) */
/* WARNING: Removing unreachable block (ram,0x014d0da6) */
/* WARNING: Removing unreachable block (ram,0x014d0daf) */

ulonglong FUN_014d0690(longlong *param_1)

{
  uint uVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar18;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar19;
  longlong *plVar20;
  bool bVar21;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  longlong *plVar17;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x378))();
    plVar17 = (longlong *)*unaff_RSI;
    if (plVar17 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_014d077f;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014d0773;
      }
    }
    else {
      lVar10 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_014d0773:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014d077f:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_014d0793;
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_014d0793:
  FUN_014bc000();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_014d07d1;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_014d07d1:
    FUN_014d19a0();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_014d1b50();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_014d083e;
      }
LAB_014d09a5:
      local_78 = local_40;
      pVar14 = (pthread_key_t)param_1;
      bVar21 = false;
      if (local_40 == (longlong *)0x0) goto LAB_014d0a46;
LAB_014d09b5:
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      local_50 = local_40;
      param_1 = local_40;
      if (local_40 == (longlong *)0x0) goto LAB_014d0a46;
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_014d09a5;
LAB_014d083e:
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = local_40;
      }
      FUN_014d1d00();
      if (local_40 == (longlong *)0x0) {
        bVar21 = false;
      }
      else {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          param_1 = local_40;
        }
        FUN_014d1d00();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        bVar21 = local_e8 != 0;
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar21) goto LAB_014d09a5;
      FUN_00d50b20();
      pVar14 = (pthread_key_t)param_1;
      bVar21 = true;
      local_78 = (longlong *)0x0;
      if (local_40 != (longlong *)0x0) goto LAB_014d09b5;
LAB_014d0a46:
      local_50 = (longlong *)0x0;
      bVar4 = false;
    }
    if (local_78 == (longlong *)0x0) {
      bVar3 = false;
      local_48 = (longlong *)0x0;
    }
    else {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      local_48 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        bVar3 = false;
        param_1 = local_40;
      }
      else {
        bVar3 = true;
        param_1 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(local_40 + 6);
    uVar8 = (ulonglong)(int)uVar1;
    dVar2 = DAT_0238fee8 / (double)local_40[7];
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if (local_50 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      if (local_48 != (longlong *)0x0) goto LAB_014d0c98;
LAB_014d0d3c:
      local_60 = (longlong *)0x0;
    }
    else {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_70 = local_40;
      if (local_48 == (longlong *)0x0) goto LAB_014d0d3c;
LAB_014d0c98:
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_60 = local_40;
    }
    uVar9 = (**(code **)(*unaff_RDI + 0x388))();
    uVar16 = (uVar9 | uVar8) >> 0x20;
    if (uVar16 == 0) {
      uVar18 = (uVar9 & 0xffffffff) % (ulonglong)uVar1;
      iVar5 = (int)((uVar9 & 0xffffffff) / (ulonglong)uVar1);
    }
    else {
      iVar5 = (int)((longlong)uVar9 / (longlong)uVar8);
      uVar18 = (longlong)uVar9 % (longlong)uVar8;
    }
    FUN_00c8e690(uVar16,uVar18);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar10 = (**(code **)(*unaff_RDI + 0x380))();
    if (-2 < iVar5) {
      uVar15 = iVar5 + 2;
      plVar17 = (longlong *)(ulonglong)uVar15;
      uVar9 = 1;
      if (1 < (int)uVar15) {
        uVar9 = (ulonglong)uVar15;
      }
      iVar19 = 0;
      uVar16 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
        plVar20 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = local_40;
          plVar20 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
        plVar17 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        uVar6 = (**(code **)(*plVar17 + 0x3a0))();
        lVar11 = (longlong)iVar19 + lVar10 + -((int)(((uint)(uVar8 >> 0x1f) & 1) + uVar1) >> 1);
        plVar17 = (longlong *)0x0;
        (**(code **)(*plVar20 + 0x388))(0,DAT_0238fee8,uVar6,lVar11);
        if ((local_50 != (longlong *)0x0) && (uVar16 < 3)) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar20 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = local_50;
            plVar20 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar17 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          uVar6 = (**(code **)(*plVar17 + 0x3a0))();
          plVar17 = (longlong *)0x0;
          uVar6 = (**(code **)(*plVar20 + 0x388))(0,DAT_0238fee8,uVar6,lVar11);
          (**(code **)(DAT_02786500 + 0x28))(uVar6,uVar1);
        }
        if ((local_48 != (longlong *)0x0) && ((longlong)(iVar5 + -2) < (longlong)uVar16)) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar20 = local_48;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = local_48;
            plVar20 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar17 = local_48;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          uVar6 = (**(code **)(*plVar17 + 0x3a0))();
          plVar17 = (longlong *)0x0;
          uVar6 = (**(code **)(*plVar20 + 0x388))(0,DAT_0238fee8,uVar6,lVar11);
          (**(code **)(DAT_02786500 + 0x28))(uVar6,uVar1);
        }
        uVar6 = (**(code **)(DAT_02786500 + 0x10))();
        *(undefined4 *)(local_40[2] + uVar16 * 4) = uVar6;
        uVar16 = uVar16 + 1;
        iVar19 = iVar19 + uVar1;
      } while (uVar9 != uVar16);
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    *(undefined2 *)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &DAT_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*DAT_025dca00)();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if ((local_48 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != (longlong *)0x0) && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar21 && local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
    FUN_00d50b20();
    goto LAB_014d137c;
  }
  uVar8 = 0;
LAB_014d137c:
  return uVar8 & 0xffffffff;
}


