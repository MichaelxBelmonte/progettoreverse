// Function: FUN_00770390
// Address: 00770390
// Size: 871 bytes
// Class: MDEditorView
// String references:
//   "_endRecordingOnUndo"
//   "_endTransferOnUndo"


/* WARNING: Removing unreachable block (ram,0x007704ff) */
/* WARNING: Removing unreachable block (ram,0x0077050b) */

void FUN_00770390(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  longlong *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined4 local_48;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_50;
  FUN_00d3ecf0();
  plVar1 = local_50;
  FUN_000fe4b0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_007703e9;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_007703e9:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
    plVar2 = local_50;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_80) {
      *(int *)((longlong)unaff_RDI + 0x16c) = *(int *)((longlong)unaff_RDI + 0x16c) + 1;
      if (unaff_RDI[0x29] != 0) {
        FUN_00100160();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      FUN_013fe9d0();
      plVar2 = local_50;
      if (((((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), (char)local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x29] == 0) {
        FUN_007647b0();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x788))();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_00770960();
      }
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_50 + 0x450))();
      pcVar5 = "_endTransferOnUndo";
      if (cVar3 != '\0') {
        pcVar5 = "_endRecordingOnUndo";
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x498))();
      FUN_00cb1f10();
      FUN_00d50b00();
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      FUN_00d50b00();
      local_38 = '\x01';
      local_40 = plVar1;
      FUN_00db2810(&DAT_0272a2a0,pcVar5,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


