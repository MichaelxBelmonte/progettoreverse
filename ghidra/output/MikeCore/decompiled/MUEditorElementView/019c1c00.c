// Function: FUN_019c1c00
// Address: 019c1c00
// Size: 531 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c1cf7) */
/* WARNING: Removing unreachable block (ram,0x019c1d00) */

longlong FUN_019c1c00(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong lVar7;
  bool bVar8;
  longlong local_50;
  char local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar5 = *unaff_RSI;
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((ulonglong)uVar1 == 0) {
    return 0;
  }
  if (0 < (int)uVar1) {
    lVar7 = 0;
    local_3c = 0;
    local_34 = 0;
    local_40 = 0;
    local_38 = 0;
    lVar2 = **(longlong **)(lVar5 + 0x10);
    do {
      pVar6 = (pthread_key_t)lVar5;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          goto LAB_019c1d10;
        }
      }
      else if (local_50 != 0) {
LAB_019c1d10:
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_01326de0();
        switch(uVar3) {
        case 1:
          local_38 = local_38 + 1;
          break;
        case 2:
          local_34 = local_34 + 1;
          break;
        case 3:
          local_40 = local_40 + 1;
          break;
        case 4:
          local_3c = local_3c + 1;
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((ulonglong)uVar1 - 1 == lVar7) goto code_r0x019c1dae;
      lVar5 = *unaff_RSI;
      lVar7 = lVar7 + 1;
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
    } while( true );
  }
  local_38 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = 0;
LAB_019c1ddd:
  if ((((local_34 != 0) || (local_38 == 0)) || ((local_40 != 0 || (lVar5 = 1, local_3c != 0)))) &&
     (((bVar8 = local_34 != 0 || local_38 != 0, bVar8 || (local_40 == 0)) ||
      (lVar5 = 3, local_3c != 0)))) {
    lVar5 = (ulonglong)(byte)((local_40 == 0 && local_3c != 0) & ~bVar8) << 2;
  }
  return lVar5;
code_r0x019c1dae:
  if ((((local_34 != 0) && (local_38 == 0)) && (local_40 == 0)) && (local_3c == 0)) {
    return 2;
  }
  goto LAB_019c1ddd;
}


