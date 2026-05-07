// Function: FUN_01a884d0
// Address: 01a884d0
// Size: 1847 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01a8851e) */
/* WARNING: Removing unreachable block (ram,0x01a88527) */

void FUN_01a884d0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  bool bVar6;
  longlong *local_a0;
  char local_98;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01a89190();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01a88592;
    FUN_00d50b00();
LAB_01a8852c:
    FUN_01a13070();
    if (local_40 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      bVar6 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01912530();
      lVar2 = *(longlong *)(unaff_RDI + 0xe8);
      lVar5 = lVar2;
      if (lVar2 != local_40) {
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
            goto LAB_01a88758;
          }
          FUN_00d50b00();
          lVar2 = *(longlong *)(unaff_RDI + 0xe8);
          *(longlong *)(unaff_RDI + 0xe8) = local_40;
        }
        else {
          local_38 = '\0';
LAB_01a88758:
          *(longlong *)(unaff_RDI + 0xe8) = lVar5;
        }
        param_1 = (pthread_key_t)lVar2;
        if (lVar2 != 0) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(unaff_RDI + 0xd8);
      plVar3 = *(longlong **)(unaff_RDI + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(unaff_RDI + 0xe0);
      plVar3 = *(longlong **)(unaff_RDI + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar6 = false;
      goto LAB_01a88bb3;
    }
    bVar6 = false;
  }
  else {
    if (local_40 != 0) goto LAB_01a8852c;
LAB_01a88592:
    bVar6 = true;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xd8);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xe0);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01a88bb3:
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
  if (!bVar6) {
    FUN_00d50b20();
  }
  return;
}


