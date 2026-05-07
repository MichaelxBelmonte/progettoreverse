// Function: FUN_0044be80
// Address: 0044be80
// Size: 799 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044be80(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined1 local_70;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = DAT_026e1800;
  if ((cVar3 != '\0') && (*unaff_RDI != 0)) {
    if (DAT_026e1800 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    pVar7 = 0xaaaaaaab;
    uVar9 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_50 = plVar1;
    local_48 = '\0';
    FUN_000175c0(uVar9,&local_50);
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
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar2 != (longlong *)0x0 & bVar4) != 0) {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8b20();
      if (local_40 == (longlong *)0x0) {
        FUN_01f27fe0();
        cVar3 = (**(code **)(*local_50 + 0x450))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar3 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        FUN_0044c3a0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = *unaff_RSI;
        local_70 = 0;
        FUN_0044c530(0,&local_78,(ulonglong)local_50 & 0xffffffff);
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_012e8aa0();
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


