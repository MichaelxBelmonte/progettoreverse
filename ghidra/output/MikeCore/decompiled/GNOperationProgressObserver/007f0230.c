// Function: FUN_007f0230
// Address: 007f0230
// Size: 1271 bytes
// Class: GNOperationProgressObserver


/* WARNING: Removing unreachable block (ram,0x007f032b) */
/* WARNING: Removing unreachable block (ram,0x007f0337) */
/* WARNING: Removing unreachable block (ram,0x007f03c7) */
/* WARNING: Removing unreachable block (ram,0x007f03d3) */
/* WARNING: Removing unreachable block (ram,0x007f04b1) */
/* WARNING: Removing unreachable block (ram,0x007f04be) */
/* WARNING: Removing unreachable block (ram,0x007f043d) */
/* WARNING: Removing unreachable block (ram,0x007f044a) */
/* WARNING: Removing unreachable block (ram,0x007f0655) */
/* WARNING: Removing unreachable block (ram,0x007f065e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f0230(ulonglong *param_1,double *param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  double dVar6;
  ulonglong uVar7;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  FUN_00b5dfe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00b5f170();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (longlong *)0x0) {
      if (param_2 != (double *)0x0) {
        dVar6 = (double)FUN_00b5ec40();
        *param_2 = dVar6;
        if (dVar6 <= 0.0) {
          *param_2 = 3600.0;
        }
      }
      if (param_1 != (ulonglong *)0x0) {
        uVar7 = FUN_00b609e0();
        *param_1 = uVar7 ^ _DAT_023945b0;
      }
      pVar3 = 0;
      FUN_0153a4c0(0,0);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_40 == (longlong *)0x0) {
        bVar5 = false;
        plVar4 = (longlong *)0x0;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        if (local_40 == (longlong *)0x0) {
          bVar5 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          bVar5 = local_50 != 0;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_016cbba0();
          if (local_40 == (longlong *)0x0) {
            bVar5 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar5 = true;
          }
          else {
            bVar5 = true;
          }
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_40;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar5 = false;
          plVar4 = (longlong *)0x0;
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
      }
      FUN_00d50130();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar5) {
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_007f0711;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar4 = (longlong *)0x0;
LAB_007f0711:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


