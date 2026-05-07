// Function: FUN_00772060
// Address: 00772060
// Size: 791 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x007721cb) */
/* WARNING: Removing unreachable block (ram,0x007721d4) */

void FUN_00772060(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  longlong *local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_007720b6;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_007720b6:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_013fe9a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    FUN_00757c60();
    plVar2 = local_40;
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_90) {
      *(int *)(unaff_RDI + 0x16c) = *(int *)(unaff_RDI + 0x16c) + -1;
      if (*(longlong *)(unaff_RDI + 0x148) != 0) {
        FUN_00101480();
      }
      (**(code **)(*plVar1 + 1000))();
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_40 + 0x788))();
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_38);
      if (cVar3 == '\0') {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_013fe9d0();
        plVar1 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00770960();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      cVar3 = FUN_00108e10();
      if (cVar3 == '\0') {
        FUN_00757c60();
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = FUN_0076e4d0();
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0010a4f0();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}


