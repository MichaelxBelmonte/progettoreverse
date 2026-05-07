// Function: FUN_01660e50
// Address: 01660e50
// Size: 1110 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01660f2d) */
/* WARNING: Removing unreachable block (ram,0x01660f36) */

void FUN_01660e50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong local_80;
  char local_78;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xf0);
  if (lVar2 == 0) {
    if (*unaff_RSI != 0) goto LAB_01660f76;
  }
  else {
    FUN_00d50b00();
    if (lVar2 == *unaff_RSI) goto LAB_01661291;
    FUN_01666660();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164ced0();
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164cea0();
    *(undefined4 *)(unaff_RDI + 0x118) = 0x3f800000;
    FUN_016670f0();
    FUN_01667210();
LAB_01660f76:
    if (*unaff_RSI != 0) {
      *(undefined8 *)(unaff_RDI + 200) = *(undefined8 *)(unaff_RDI + 0xc0);
      *(undefined8 *)(unaff_RDI + 0xd8) = *(undefined8 *)(unaff_RDI + 0xd0);
      *(undefined4 *)(unaff_RDI + 0xe4) = *(undefined4 *)(unaff_RDI + 0xe0);
      *(undefined1 *)(unaff_RDI + 0xe8) = 0;
      *(undefined1 *)(unaff_RDI + 0x106) = 0;
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
      FUN_00d50b00();
      FUN_0164cea0();
      if ((longlong *)(unaff_RDI + 0x90) != (longlong *)0x0) {
        (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e31390();
      FUN_0164ced0();
    }
    plVar1 = (longlong *)(unaff_RDI + 0xf0);
    FUN_00d64850();
    lVar6 = *unaff_RSI;
    lVar3 = *plVar1;
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar1 = lVar6;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*unaff_RSI != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df30();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 == 0) {
        plVar9 = (longlong *)*plVar1;
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (longlong *)*plVar1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3d0))();
      }
      FUN_01665fa0();
    }
    pVar7 = (pthread_key_t)param_1;
    if (lVar2 != 0) {
      lVar6 = *(longlong *)(unaff_RDI + 0xa8);
      if (lVar6 != 0) {
        for (iVar8 = 0; pVar7 = (pthread_key_t)param_1, iVar8 < *(int *)(lVar6 + 0xc);
            iVar8 = iVar8 + 1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01652cd0();
        }
        FUN_0049cc10();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    cVar4 = FUN_01733c10();
    if ((cVar4 == '\0') && (*(longlong *)(unaff_RDI + 0xf0) != 0)) {
      FUN_016818b0();
    }
  }
  if (lVar2 == 0) {
    return;
  }
LAB_01661291:
  FUN_00d50b20();
  return;
}


