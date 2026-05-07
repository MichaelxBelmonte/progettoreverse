// Function: FUN_000bd140
// Address: 000bd140
// Size: 890 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x000bd20f) */
/* WARNING: Removing unreachable block (ram,0x000bd218) */
/* WARNING: Removing unreachable block (ram,0x000bd195) */
/* WARNING: Removing unreachable block (ram,0x000bd19e) */
/* WARNING: Removing unreachable block (ram,0x000bd28e) */
/* WARNING: Removing unreachable block (ram,0x000bd297) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_000bd140(pthread_key_t param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  
  (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 0xa00))();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_000bd1a3;
    }
  }
  else if (local_68 != 0) {
LAB_000bd1a3:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_68 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar1 = true;
    }
    else {
      lVar5 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar5 = local_68;
      }
      FUN_016c2660();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      plVar4 = (longlong *)FUN_000bea40();
      (**(code **)(*plVar4 + 0x18))();
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar5 = local_68;
      }
      dVar8 = (double)FUN_016c26c0(0);
      if (local_68 == 0) {
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        if (0 < *(int *)(local_68 + 0xc)) {
          iVar7 = 0;
          do {
            pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_019079b0();
            dVar9 = (double)FUN_00e7c860();
            dVar9 = dVar9 * _DAT_02391088;
            pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
            plVar6 = plVar4;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              plVar6 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01907950();
            (**(code **)(*plVar6 + 0x418))(uVar10,dVar9 + dVar8);
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(local_68 + 0xc));
        }
        FUN_000beb10();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    FUN_00d50b20();
    if (bVar1) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


