// Function: FUN_01c60a90
// Address: 01c60a90
// Size: 2394 bytes
// Class: GNList


void FUN_01c60a90(undefined4 param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  int extraout_var;
  ulonglong uVar12;
  int extraout_var_00;
  longlong *plVar13;
  pthread_key_t in_ECX;
  pthread_key_t pVar14;
  undefined4 *puVar15;
  longlong unaff_RDI;
  longlong **pplVar16;
  undefined4 uVar17;
  int iStack_64;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  plVar2 = *(longlong **)(unaff_RDI + 0x170);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar17 = (**(code **)(*plVar2 + 0x388))(param_1);
  FUN_00d50b20();
  lVar3 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(in_ECX);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cb850(uVar17,0);
  FUN_00e7d850();
  FUN_00e7bcc0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(in_ECX);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar16 = &local_40;
  FUN_016d8300();
  plVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = false;
    local_48 = (longlong *)0x0;
LAB_01c60ce9:
    bVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(in_ECX);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016d8ab0();
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar5 = true;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_40 = (longlong *)FUN_016bf2e0();
    bVar7 = 0;
    if ((extraout_var != 0) && ((ulonglong)local_40 >> 0x20 != 0)) {
      cVar6 = FUN_00e7c020();
      if (cVar6 == '\0') goto LAB_01c60ce9;
      uVar12 = FUN_016bf310();
      bVar7 = 0;
      if ((extraout_var != 0) && (uVar12 >> 0x20 != 0)) {
        bVar7 = FUN_00e7c020();
      }
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x178);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar2;
  FUN_00083c20();
  if (plVar2 == (longlong *)0x0) {
LAB_01c60d30:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01c60d30;
  }
  plVar4 = *pplVar16;
  if (*(char *)(pplVar16 + 1) == '\0') {
    cVar6 = '\x01';
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar16 + 1) = 0;
    cVar6 = local_38;
  }
  if ((cVar6 != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01c60dda:
    bVar8 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x3a0))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) goto LAB_01c60dda;
    (**(code **)(*plVar4 + 0x3a0))();
    bVar8 = (**(code **)(*local_40 + 0x3c8))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar12 = FUN_01d3b590();
  iVar9 = FUN_01c5f8c0(uVar17,param_1);
  uVar10 = FUN_01c5faf0(uVar17);
  *(undefined4 *)(unaff_RDI + 0x1cc) = 0;
  if (iVar9 == 0) goto LAB_01c613ae;
  puVar1 = (undefined4 *)(unaff_RDI + 0x1cc);
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    if ((bVar7 & iVar9 != 5) == 1) {
      if (iVar9 - 1U < 2) {
        *puVar1 = 0x12;
      }
      else {
        *puVar1 = 0x13;
      }
      goto LAB_01c613ae;
    }
    if (iVar9 == 1) {
      *puVar1 = 6;
      if (local_48 != (longlong *)0x0) goto LAB_01c613ae;
      puVar15 = puVar1;
      FUN_00e7bdb0();
      pVar14 = (pthread_key_t)puVar15;
      lVar3 = *(longlong *)(unaff_RDI + 0x188);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016f4e60();
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
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      iStack_64 = extraout_var_00;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(unaff_RDI + 0x188);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016cb850(uVar17,0);
        FUN_00e7d850();
        plVar13 = (longlong *)FUN_00e7bcc0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = *(longlong *)(unaff_RDI + 0x188);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_01909dc0();
        FUN_016caaa0(uVar17,0);
        local_40 = plVar13;
        FUN_00e7b970();
        iStack_64 = (int)((ulonglong)local_40 >> 0x20);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (uVar10 == 0) {
        if (iStack_64 != 0) {
          local_40 = (longlong *)CONCAT44(local_40._4_4_,0xfffffffc);
          cVar6 = FUN_00e7c650();
          if (((cVar6 != '\0') && (iStack_64 != 0)) && (cVar6 = FUN_00e7c6b0(), cVar6 == '\0')) {
            local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
            if ((iStack_64 == 0) || (cVar6 = FUN_00e7c6b0(), cVar6 != '\0')) goto LAB_01c612f4;
            goto LAB_01c61397;
          }
        }
      }
      else if (uVar10 == 4) {
LAB_01c61397:
        *puVar1 = 10;
      }
      else if (uVar10 == 2) {
LAB_01c612f4:
        *puVar1 = 8;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01c613ae;
    }
    if (iVar9 == 3) {
      if (local_48 != (longlong *)0x0) {
        cVar6 = FUN_016bf360();
        if ((((cVar6 != '\0') && (local_40 = (longlong *)FUN_016bf2e0(), extraout_var != 0)) &&
            ((ulonglong)local_40 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
LAB_01c6109d:
          *puVar1 = 0x14;
          goto LAB_01c613ae;
        }
        cVar6 = FUN_016bf360();
        if (((cVar6 != '\0') && (local_40 = (longlong *)FUN_016bf310(), extraout_var != 0)) &&
           (((ulonglong)local_40 >> 0x20 != 0 && (cVar6 = FUN_00e7c000(), cVar6 != '\0')))) {
LAB_01c610e3:
          *puVar1 = 0x15;
          goto LAB_01c613ae;
        }
      }
      if (uVar10 == 4) {
LAB_01c6110d:
        *puVar1 = 0xd;
        goto LAB_01c613ae;
      }
      if (uVar10 == 2) {
LAB_01c610fe:
        *puVar1 = 0xb;
        goto LAB_01c613ae;
      }
      goto LAB_01c6111c;
    }
    if (iVar9 != 4) goto LAB_01c613ae;
    if (local_48 != (longlong *)0x0) {
      cVar6 = FUN_016bf360();
      if (((cVar6 != '\0') && (local_40 = (longlong *)FUN_016bf2e0(), extraout_var != 0)) &&
         (((ulonglong)local_40 >> 0x20 != 0 && (cVar6 = FUN_00e7c000(), cVar6 != '\0'))))
      goto LAB_01c6109d;
      cVar6 = FUN_016bf360();
      if ((((cVar6 != '\0') && (local_40 = (longlong *)FUN_016bf310(), extraout_var != 0)) &&
          ((ulonglong)local_40 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0'))
      goto LAB_01c610e3;
    }
    if (((uVar12 & 8) == 0 & bVar8) != 0) {
      *puVar1 = 0x11;
      goto LAB_01c613ae;
    }
  }
  else {
    if (1 < uVar10) {
      if (iVar9 == 2) {
        if (uVar10 == 3) {
          *puVar1 = 9;
        }
        else if (uVar10 == 2) {
          *puVar1 = 8;
        }
        else {
          *puVar1 = 10;
        }
        goto LAB_01c613ae;
      }
      if (iVar9 == 1) {
        if (uVar10 == 3) {
          *puVar1 = 6;
        }
        else if (uVar10 == 2) {
          *puVar1 = 5;
        }
        else {
          *puVar1 = 7;
        }
        goto LAB_01c613ae;
      }
      if (uVar10 != 3) {
        if (uVar10 == 2) goto LAB_01c610fe;
        goto LAB_01c6110d;
      }
LAB_01c6111c:
      *puVar1 = 0xc;
      goto LAB_01c613ae;
    }
    if (iVar9 == 2) {
      *puVar1 = 3;
      goto LAB_01c613ae;
    }
    if (iVar9 == 1) {
      *puVar1 = 2;
      goto LAB_01c613ae;
    }
  }
  *puVar1 = 4;
LAB_01c613ae:
  FUN_01c5fd60();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


