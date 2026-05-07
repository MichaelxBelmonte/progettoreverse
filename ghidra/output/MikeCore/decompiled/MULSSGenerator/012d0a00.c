// Function: FUN_012d0a00
// Address: 012d0a00
// Size: 2372 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012d0b75) */
/* WARNING: Removing unreachable block (ram,0x012d0d6d) */
/* WARNING: Removing unreachable block (ram,0x012d0d79) */
/* WARNING: Removing unreachable block (ram,0x012d0f18) */
/* WARNING: Removing unreachable block (ram,0x012d0f28) */
/* WARNING: Removing unreachable block (ram,0x012d1302) */
/* WARNING: Removing unreachable block (ram,0x012d130b) */
/* WARNING: Removing unreachable block (ram,0x012d124e) */
/* WARNING: Removing unreachable block (ram,0x012d1257) */
/* WARNING: Removing unreachable block (ram,0x012d0dcb) */
/* WARNING: Removing unreachable block (ram,0x012d0dd7) */
/* WARNING: Removing unreachable block (ram,0x012d0ea7) */
/* WARNING: Removing unreachable block (ram,0x012d0ed0) */
/* WARNING: Removing unreachable block (ram,0x012d0b80) */
/* WARNING: Removing unreachable block (ram,0x012d0ba0) */
/* WARNING: Removing unreachable block (ram,0x012d0b82) */
/* WARNING: Removing unreachable block (ram,0x012d0ba2) */
/* WARNING: Removing unreachable block (ram,0x012d0aef) */
/* WARNING: Removing unreachable block (ram,0x012d0b10) */
/* WARNING: Removing unreachable block (ram,0x012d0af1) */
/* WARNING: Removing unreachable block (ram,0x012d0b12) */
/* WARNING: Removing unreachable block (ram,0x012d0de5) */
/* WARNING: Removing unreachable block (ram,0x012d0df1) */
/* WARNING: Removing unreachable block (ram,0x012d0ea9) */
/* WARNING: Removing unreachable block (ram,0x012d0ed2) */
/* WARNING: Removing unreachable block (ram,0x012d0e24) */
/* WARNING: Removing unreachable block (ram,0x012d0e34) */

void FUN_012d0a00(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_140;
  char local_138;
  longlong local_98;
  char local_90;
  int local_80;
  longlong local_60;
  char local_58;
  int local_48;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  lVar6 = *unaff_RSI;
  if (lVar6 == 0) {
    lVar6 = unaff_RDI[0x2e];
    if (lVar6 == 0) goto LAB_012d113e;
    lVar11 = *(longlong *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) == 0) {
      if (*(longlong *)(lVar6 + 0x10) == 0) goto LAB_012d11d5;
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012d1344;
    }
    FUN_00d50b00();
LAB_012d0aa1:
    bVar3 = true;
    local_60 = lVar11;
LAB_012d0aae:
    local_58 = '\0';
    local_48 = -1;
    while( true ) {
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_60 + 0xc) <= local_48) break;
      lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
      lVar11 = unaff_RDI[0x21];
      lVar10 = *(longlong *)(local_60 + 0x10);
      if (lVar11 == 0) {
LAB_012d0c1c:
        pVar9 = (pthread_key_t)lVar10;
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_011ce1f0();
        (**(code **)(*plVar7 + 0x18))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b33530();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b335a0();
        (**(code **)(*unaff_RDI + 0x3a8))();
        (**(code **)(*plVar7 + 0x3a0))();
        FUN_00b335d0();
        (**(code **)(*plVar7 + 0x398))();
        FUN_00d50b00();
        FUN_012dd9b0();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_01308480();
        (**(code **)(*plVar7 + 0x368))();
        FUN_00ca0840();
        FUN_01308ea0();
        FUN_00d50b20();
      }
      else {
        local_80 = -1;
        do {
          local_80 = local_80 + 1;
          if (*(int *)(lVar11 + 0xc) <= local_80) {
            FUN_01312d90();
            lVar10 = lVar11;
            goto LAB_012d0c1c;
          }
          FUN_01308710();
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
        } while (local_140 != lVar6);
        FUN_01312d90();
      }
    }
    FUN_000be170();
    bVar1 = false;
  }
  else {
    lVar11 = *(longlong *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) != 0) {
      FUN_00d50b00();
      goto LAB_012d0aa1;
    }
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
LAB_012d1344:
      if (local_60 == 0) {
        bVar1 = true;
        goto LAB_012d0e64;
      }
      goto LAB_012d0aae;
    }
LAB_012d11d5:
    bVar1 = true;
    bVar3 = false;
  }
LAB_012d0e64:
  lVar6 = unaff_RDI[0x21];
  if (lVar6 != 0) {
    local_58 = '\0';
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      FUN_01308ea0();
    }
    FUN_01312d90();
  }
  lVar6 = *unaff_RSI;
  if (lVar6 == 0) {
    *(undefined1 *)((longlong)unaff_RDI + 0x1d3) = 0;
    lVar6 = FUN_00e313b0();
    do {
      cVar4 = FUN_00e31450(3,plVar5);
    } while (cVar4 == '\0');
    FUN_012d21a0();
    if (local_58 == '\0') {
      if (lVar6 != 0) {
        FUN_00d50b00();
        goto LAB_012d10a6;
      }
    }
    else if (lVar6 != 0) {
LAB_012d10a6:
      for (lVar11 = 0; (int)lVar11 < *(int *)(lVar6 + 0xc); lVar11 = lVar11 + 1) {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8) + 0x370))();
      }
      FUN_00540a20();
      FUN_00d50b20();
    }
    bVar2 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  else {
    plVar7 = *(longlong **)(lVar6 + 0x28);
    if (plVar7 != plVar5) {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(lVar6 + 0x28) = plVar5;
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
        bVar2 = false;
        goto joined_r0x012d1113;
      }
    }
    bVar2 = false;
  }
joined_r0x012d1113:
  if (bVar3 && !bVar1) {
    FUN_00d50b20();
  }
  if (bVar2 || plVar5 == (longlong *)0x0) {
    return;
  }
LAB_012d113e:
  FUN_00d50b20();
  return;
}


