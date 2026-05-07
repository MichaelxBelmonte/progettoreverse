// Function: FUN_019c2380
// Address: 019c2380
// Size: 990 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c2526) */
/* WARNING: Removing unreachable block (ram,0x019c2532) */
/* WARNING: Removing unreachable block (ram,0x019c25a3) */
/* WARNING: Removing unreachable block (ram,0x019c25ac) */

undefined4 FUN_019c2380(pthread_key_t param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  longlong *plVar8;
  undefined8 local_78;
  longlong *local_40;
  char local_38;
  
  cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar4 == '\0') {
    return 0;
  }
  (**(code **)(*unaff_RDI + 0xe10))();
  iVar1 = *(int *)((longlong)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    return 0;
  }
  local_78 = FUN_00e7bdb0();
  pplVar7 = &local_40;
  (**(code **)(*unaff_RDI + 0xd40))();
  plVar8 = local_40;
  FUN_00083c20();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019c2427;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_019c2427:
  plVar8 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    if ((param_2 != '\0') && (plVar2 = (longlong *)unaff_RDI[0x69], plVar2 != (longlong *)0x0)) {
      (**(code **)(*unaff_RDI + 0xe10))();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01266200();
      (**(code **)(*plVar2 + 0x60))();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_019c29e0();
    if (plVar8 == local_40) {
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0xe10))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = FUN_01ca2090();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_2 != '\0') && (plVar2 = (longlong *)unaff_RDI[0x69], plVar2 != (longlong *)0x0)) {
      (**(code **)(*unaff_RDI + 0xa18))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c98e0();
      (**(code **)(*plVar2 + 0x60))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0xe10))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01c936e0(param_2,local_78);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar5;
}


