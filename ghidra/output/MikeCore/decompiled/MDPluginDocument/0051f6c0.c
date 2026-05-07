// Function: FUN_0051f6c0
// Address: 0051f6c0
// Size: 1861 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051f8d6) */
/* WARNING: Removing unreachable block (ram,0x0051f879) */
/* WARNING: Removing unreachable block (ram,0x0051f889) */
/* WARNING: Removing unreachable block (ram,0x0051fab6) */
/* WARNING: Removing unreachable block (ram,0x0051fac3) */

void FUN_0051f6c0(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  if (*(longlong *)(unaff_RDI + 0xe8) == 0) {
    return;
  }
  FUN_012d2610();
  plVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return;
  }
  if (*(int *)((longlong)plVar3 + 0xc) == 0) goto LAB_0051fe1f;
  local_60 = plVar3;
  if (*(char *)(unaff_RDI + 0xa0) == '\0') {
    if ((*(double *)(unaff_RDI + 0xc0) != *(double *)(unaff_RDI + 0x260)) ||
       (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(*(double *)(unaff_RDI + 0x260))))
    goto LAB_0051f762;
LAB_0051f991:
    if ((*(double *)(unaff_RDI + 0xa8) != *(double *)(unaff_RDI + 0xb0)) ||
       (NAN(*(double *)(unaff_RDI + 0xa8)) || NAN(*(double *)(unaff_RDI + 0xb0))))
    goto LAB_0051f9ab;
  }
  else {
LAB_0051f762:
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_48 = plVar3;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar1 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)local_48[2]);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f0960(*(undefined8 *)(unaff_RDI + 0x260),unaff_SIL);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    param_1 = local_48;
    FUN_000be170();
    plVar3 = local_60;
    if (*(longlong **)(unaff_RDI + 200) != (longlong *)0x0) {
      local_50 = 0;
      local_58 = (longlong *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = *(longlong **)(unaff_RDI + 200);
      while( true ) {
        lVar1 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar1 * 8);
        FUN_0190a220();
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
      }
      param_1 = local_48;
      FUN_00540ac0();
    }
    local_58 = (longlong *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0xc0) = *(undefined8 *)(unaff_RDI + 0x260);
    if (*(char *)(unaff_RDI + 0xa0) == '\0') goto LAB_0051f991;
LAB_0051f9ab:
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = plVar3;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar1 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)local_48[2]);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f0960(*(undefined8 *)(unaff_RDI + 0xb0),unaff_SIL);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    param_1 = local_48;
    FUN_000be170();
    plVar3 = local_60;
    if (*(longlong **)(unaff_RDI + 0xb8) != (longlong *)0x0) {
      local_50 = 0;
      local_58 = (longlong *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = *(longlong **)(unaff_RDI + 0xb8);
      while( true ) {
        lVar1 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar1 * 8);
        FUN_0190a220();
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
      }
      param_1 = local_48;
      FUN_00540ac0();
    }
    local_58 = (longlong *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0xa8) = *(undefined8 *)(unaff_RDI + 0xb0);
  }
  if ((*(char *)(unaff_RDI + 0x24f) == '\0') || (*(char *)(unaff_RDI + 0x24d) == '\0')) {
    plVar3 = *(longlong **)(unaff_RDI + 0xd8);
    if (plVar3 != (longlong *)0x0) {
      local_50 = '\0';
      local_58 = (longlong *)0x0;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = plVar3;
      for (lVar1 = 0; local_40 = (int)lVar1, local_40 < *(int *)((longlong)plVar3 + 0xc);
          lVar1 = lVar1 + 1) {
        local_58 = *(longlong **)(plVar3[2] + lVar1 * 8);
        FUN_0190a220();
      }
      FUN_00540ac0();
    }
    FUN_00d216c0();
  }
  else {
    if (*(char *)(unaff_RDI + 0xa0) == '\0') {
      if ((*(double *)(unaff_RDI + 0xd0) == *(double *)(unaff_RDI + 0x250)) &&
         (!NAN(*(double *)(unaff_RDI + 0xd0)) && !NAN(*(double *)(unaff_RDI + 0x250))))
      goto LAB_0051fe17;
    }
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = plVar3;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      lVar1 = 0;
      do {
        local_58 = *(longlong **)(plVar3[2] + lVar1 * 8);
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00521df0(*(undefined8 *)(unaff_RDI + 0x250));
        local_70 = 0;
        local_68 = '\0';
        param_1 = &local_70;
        FUN_012f0960(&local_70,unaff_SIL);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = lVar1 + 1;
        local_40 = (int)lVar1;
        plVar3 = local_60;
      } while (local_40 < *(int *)((longlong)local_60 + 0xc));
    }
    FUN_000be170();
    plVar3 = *(longlong **)(unaff_RDI + 0xd8);
    if (plVar3 != (longlong *)0x0) {
      local_50 = 0;
      local_58 = (longlong *)0x0;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = plVar3;
      for (lVar1 = 0; local_40 = (int)lVar1, local_40 < *(int *)((longlong)plVar3 + 0xc);
          lVar1 = lVar1 + 1) {
        local_58 = *(longlong **)(plVar3[2] + lVar1 * 8);
        FUN_0190a220();
      }
      FUN_00540ac0();
    }
    local_58 = (longlong *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0xd0) = *(undefined8 *)(unaff_RDI + 0x250);
  }
LAB_0051fe17:
  *(undefined1 *)(unaff_RDI + 0xa0) = 0;
LAB_0051fe1f:
  FUN_00d50b20();
  return;
}


