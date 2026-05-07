// Function: FUN_01ea2f80
// Address: 01ea2f80
// Size: 960 bytes
// Class: GNMultipleValue
// String references:
//   "file format unknown"


/* WARNING: Removing unreachable block (ram,0x01ea31be) */
/* WARNING: Removing unreachable block (ram,0x01ea31c7) */
/* WARNING: Removing unreachable block (ram,0x01ea32a5) */
/* WARNING: Removing unreachable block (ram,0x01ea32ae) */
/* WARNING: Removing unreachable block (ram,0x01ea30eb) */
/* WARNING: Removing unreachable block (ram,0x01ea30f4) */
/* WARNING: Removing unreachable block (ram,0x01ea323b) */
/* WARNING: Removing unreachable block (ram,0x01ea3247) */
/* WARNING: Removing unreachable block (ram,0x01ea31fa) */
/* WARNING: Removing unreachable block (ram,0x01ea320a) */
/* WARNING: Removing unreachable block (ram,0x01ea3227) */
/* WARNING: Removing unreachable block (ram,0x01ea3230) */
/* WARNING: Removing unreachable block (ram,0x01ea3291) */
/* WARNING: Removing unreachable block (ram,0x01ea329a) */

void FUN_01ea2f80(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  longlong *plVar5;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)*param_2;
  FUN_01ea1150();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar5 + 0x50))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_01d55700();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_00d21140();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if (local_58 == '\0') {
      return;
    }
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  _CFDataCreate(param_1,(longlong)*(int *)(*unaff_RSI + 0x18));
  _CGImageSourceCreateWithData();
  lVar3 = _CGImageSourceGetCount();
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      _CGImageSourceCreateImageAtIndex(param_1,0);
      local_40 = (longlong *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*local_40 + 0x18))();
      FUN_01d521a0();
      local_38 = '\0';
      FUN_00d21140();
      _CGImageRelease();
      FUN_00d50b20();
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  _CFRelease();
  _CFRelease();
  if (0 < *(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc)) {
    return;
  }
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0x18) < 1)) {
LAB_01ea32e4:
    lVar3 = DAT_027fe2e8;
    if (DAT_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f53c30();
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_38 = '\0';
      }
    }
    if (plVar5 == (longlong *)0x0) {
      FUN_01f54560();
      if (local_40 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
      }
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) goto LAB_01ea32e4;
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar1 != plVar5) {
      FUN_00d50b00();
      *(longlong **)(unaff_RDI + 0x10) = plVar5;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


