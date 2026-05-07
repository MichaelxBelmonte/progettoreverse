// Function: FUN_01a7c220
// Address: 01a7c220
// Size: 2214 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a7c9d6) */
/* WARNING: Removing unreachable block (ram,0x01a7c9df) */
/* WARNING: Removing unreachable block (ram,0x01a7ca3b) */
/* WARNING: Removing unreachable block (ram,0x01a7ca44) */
/* WARNING: Removing unreachable block (ram,0x01a7c55f) */
/* WARNING: Removing unreachable block (ram,0x01a7c568) */
/* WARNING: Removing unreachable block (ram,0x01a7c2eb) */
/* WARNING: Removing unreachable block (ram,0x01a7c2f4) */
/* WARNING: Removing unreachable block (ram,0x01a7c969) */
/* WARNING: Removing unreachable block (ram,0x01a7c972) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01a7c220(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *in_RCX;
  longlong *plVar8;
  undefined8 *unaff_RDI;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0128e4b0(param_1);
  pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01a7c301;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01a7c301:
    plVar5 = (longlong *)FUN_011114e0();
    (**(code **)(*plVar5 + 0x18))();
    pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ef430(_DAT_02391038,_DAT_02391038);
    pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
    plVar8 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x418))(0,0);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264170();
    FUN_0128e4b0();
    pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
    plVar8 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x418))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
  plVar8 = plVar5;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  dVar10 = (double)(**(code **)(*plVar8 + 0x380))(uVar9);
  pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
  plVar8 = plVar5;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar8 + 0x378))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)in_RCX);
  plVar8 = local_40;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    in_RCX = local_40;
    plVar8 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  pVar7 = (pthread_key_t)in_RCX;
  dVar11 = (double)(**(code **)(*plVar8 + 0x380))(dVar10);
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_01264170();
  if ((((0.0 < dVar11) && (dVar11 < dVar12)) && (0.0 < dVar10)) && (dVar10 < dVar12)) {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_013f3690(dVar11);
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar6 = *(longlong *)(local_40[2] + (longlong)iVar3 * 8);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar1 = *(longlong *)(local_40[2] + 8 + (longlong)iVar3 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_013faed0();
    if (dVar11 <= dVar12 + DAT_0241c3a0) {
LAB_01a7c896:
      bVar2 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faed0();
      if (dVar12 + _DAT_0241c3a8 <= dVar11) goto LAB_01a7c896;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      if (dVar10 <= dVar12 + DAT_0241c3a0) goto LAB_01a7c896;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      if (dVar12 + _DAT_0241c3a8 <= dVar10) goto LAB_01a7c896;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (bVar2) {
      pvVar4 = _pthread_getspecific(pVar7);
      plVar8 = plVar5;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x410))(dVar11,dVar10);
      if (local_40 == (longlong *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
        }
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126de80();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126dd90();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar8 = (longlong *)0x0;
      if (bVar2) {
        plVar8 = local_40;
      }
      if (local_40 != (longlong *)0x0 && !bVar2) {
        FUN_00d50b00();
        plVar8 = local_40;
      }
      goto LAB_01a7c8f5;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar8 = (longlong *)0x0;
LAB_01a7c8f5:
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


