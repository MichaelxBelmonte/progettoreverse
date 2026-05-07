// Function: FUN_004566f0
// Address: 004566f0
// Size: 804 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x004568f0) */
/* WARNING: Removing unreachable block (ram,0x004568f9) */

void FUN_004566f0(double param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong lVar4;
  longlong unaff_RDI;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double local_98;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  
  lVar7 = *(longlong *)(unaff_RDI + 0x60);
  if ((lVar7 != 0) || (lVar7 = *(longlong *)(unaff_RDI + 0x30), lVar7 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(unaff_RDI + 0x70) == 2) {
    lVar4 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x30);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar4 = *(longlong *)(lVar4 + 0x308);
    FUN_00d50b20();
    if (lVar4 == 0) goto LAB_0045676d;
  }
  else {
LAB_0045676d:
    FUN_00b34cb0();
    cVar1 = (**(code **)(*local_70 + 0x38))();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_013201a0();
      local_98 = param_1;
      if (*(longlong *)(unaff_RDI + 0x68) != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_01656080(param_1);
      }
      FUN_00b34cb0();
      dVar9 = local_98 - dVar8;
      dVar11 = 0.0;
      if (0.0 <= dVar9) {
        dVar11 = dVar9;
      }
      (**(code **)(*local_70 + 0x40))
                (~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar8 |
                 (ulonglong)local_98 & -(ulonglong)(dVar9 < 0.0),dVar11);
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x10))();
        FUN_00d50b20();
      }
      uVar10 = FUN_00e7d6f0();
      *(undefined8 *)(unaff_RDI + 0x78) = uVar10;
      goto LAB_004569fe;
    }
  }
  FUN_00453670();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_004568fe;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_004568fe:
    if (*(int *)((longlong)local_70 + 0xc) < 1) {
      bVar5 = 0;
    }
    else {
      iVar6 = 0;
      bVar5 = 0;
      do {
        FUN_0053a8d0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar2 = FUN_002dcda0(param_1);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = bVar5 | bVar2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((longlong)local_70 + 0xc));
      bVar5 = bVar5 & 1;
    }
    FUN_0015ee90();
    FUN_00d50b20();
    if (bVar5 != 0) {
      FUN_00324d40();
    }
  }
  if (lVar7 == 0) {
    return;
  }
LAB_004569fe:
  FUN_00d50b20();
  return;
}


