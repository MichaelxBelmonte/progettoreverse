// Function: FUN_0036d5a0
// Address: 0036d5a0
// Size: 1780 bytes
// Class: MDMetaWindowController
// String references:
//   "recording.%@"


/* WARNING: Removing unreachable block (ram,0x0036dbca) */
/* WARNING: Removing unreachable block (ram,0x0036dbcf) */
/* WARNING: Removing unreachable block (ram,0x0036dbd7) */
/* WARNING: Removing unreachable block (ram,0x0036d99b) */
/* WARNING: Removing unreachable block (ram,0x0036d9a7) */
/* WARNING: Removing unreachable block (ram,0x0036dc33) */
/* WARNING: Removing unreachable block (ram,0x0036dc3f) */
/* WARNING: Removing unreachable block (ram,0x0036da47) */
/* WARNING: Removing unreachable block (ram,0x0036da54) */
/* WARNING: Removing unreachable block (ram,0x0036d8bf) */
/* WARNING: Removing unreachable block (ram,0x0036d8cc) */
/* WARNING: Removing unreachable block (ram,0x0036d807) */
/* WARNING: Removing unreachable block (ram,0x0036d814) */
/* WARNING: Removing unreachable block (ram,0x0036d839) */
/* WARNING: Removing unreachable block (ram,0x0036d846) */
/* WARNING: Removing unreachable block (ram,0x0036d90f) */
/* WARNING: Removing unreachable block (ram,0x0036d918) */
/* WARNING: Removing unreachable block (ram,0x0036dbae) */
/* WARNING: Removing unreachable block (ram,0x0036dbbb) */
/* WARNING: Removing unreachable block (ram,0x0036d725) */
/* WARNING: Removing unreachable block (ram,0x0036d760) */
/* WARNING: Removing unreachable block (ram,0x0036d727) */
/* WARNING: Removing unreachable block (ram,0x0036d763) */
/* WARNING: Removing unreachable block (ram,0x0036d6cb) */

undefined8 * FUN_0036d5a0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong local_100;
  char local_f8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  
  plVar4 = local_70;
  plVar9 = (longlong *)*param_2;
  FUN_000fe4b0();
  if (plVar9 == (longlong *)0x0) {
LAB_0036d5ef:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0036d5ef;
  }
  lVar3 = param_2[1];
  if (((char)lVar3 == '\0') || (*param_2 == 0)) {
    if (*param_2 != 0) goto LAB_0036d622;
    bVar1 = true;
    bVar2 = false;
  }
  else {
    FUN_00d50b00();
LAB_0036d622:
    pVar8 = (pthread_key_t)param_2;
    FUN_013fe9a0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x720))();
    (**(code **)(*local_48 + 0x618))();
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)0x0;
    if (local_70 == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      local_70 = (longlong *)0x0;
      local_58 = -1;
      do {
        do {
          lVar7 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)((longlong)plVar4 + 0xc) <= local_58) {
            bVar2 = false;
            plVar9 = (longlong *)0x0;
            goto LAB_0036d7cd;
          }
          local_70 = *(longlong **)(plVar4[2] + 8 + lVar7 * 8);
        } while (local_70 == (longlong *)0x0);
        FUN_00757c60();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      } while (local_48 != plVar4);
      FUN_0075c8d0();
      if (local_48 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
LAB_0036d7cd:
      FUN_002b3090();
      FUN_00d50b20();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    local_68 = '\0';
    bVar1 = false;
    if (plVar9 != (longlong *)0x0) goto LAB_0036d92e;
  }
  (**(code **)(*unaff_RSI + 0x768))();
  if (local_70 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    bVar2 = true;
    plVar9 = local_70;
    if (local_68 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_0036d92e:
  cVar5 = (**(code **)(*plVar9 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar9 + 0x428))();
  }
  (**(code **)(*unaff_RSI + 0x7c8))();
  FUN_00b88410();
  if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00df1af0();
  if (local_100 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar7 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  (**(code **)(*plVar9 + 0x400))();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_100 != 0) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*local_48 + 0x398))();
  if (cVar5 != '\0') {
    local_c8 = 0;
    local_c0 = '\0';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00b8a050(&local_b8,&local_c8,0,1);
    if (local_48 == &DAT_024c5048) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_48 = &DAT_024c5048;
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


