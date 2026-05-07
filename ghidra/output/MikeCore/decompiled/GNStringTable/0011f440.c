// Function: FUN_0011f440
// Address: 0011f440
// Size: 888 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x0011f4d2) */
/* WARNING: Removing unreachable block (ram,0x0011f4de) */
/* WARNING: Removing unreachable block (ram,0x0011f580) */
/* WARNING: Removing unreachable block (ram,0x0011f589) */
/* WARNING: Removing unreachable block (ram,0x0011f631) */
/* WARNING: Removing unreachable block (ram,0x0011f63e) */
/* WARNING: Removing unreachable block (ram,0x0011f6a5) */
/* WARNING: Removing unreachable block (ram,0x0011f6b1) */

void FUN_0011f440(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  char cVar6;
  longlong lVar7;
  longlong *local_b8;
  char local_b0;
  longlong local_78;
  char local_70;
  char local_31;
  
  if (param_2 == 0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x998))();
    plVar1 = (longlong *)*unaff_RSI;
    FUN_00d8ede0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_70 == '\0') {
      return;
    }
    if (local_78 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x998))();
  FUN_00d6f370();
  (**(code **)(*local_b8 + 0x88))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_31 = '\x01';
  if (local_78 == 0) {
    local_78 = *param_3;
    if (local_78 != 0) {
      local_31 = (char)param_3[1];
      if (local_31 != '\0') {
        FUN_00d50b00();
      }
      goto LAB_0011f50e;
    }
    lVar7 = *param_4;
    local_78 = 0;
    local_31 = '\x01';
    cVar6 = '\x01';
    if (lVar7 != 0) goto LAB_0011f51d;
  }
  else {
LAB_0011f50e:
    lVar7 = *param_4;
    if (lVar7 != 0) {
LAB_0011f51d:
      lVar5 = 0;
      do {
        cVar6 = local_31;
        if (*(int *)(lVar7 + 0xc) <= (int)lVar5) {
          FUN_00083b20();
          FUN_01d6fde0();
          FUN_01d6ed40();
          goto joined_r0x0011f753;
        }
        cVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar5 * 8) + 0x50))();
        lVar5 = lVar5 + 1;
      } while (cVar2 == '\0');
      FUN_01d6ed40();
      FUN_00083b20();
      goto joined_r0x0011f753;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x978))();
    iVar3 = FUN_01d70da0();
    cVar6 = local_31;
    if (-1 < iVar3) {
      iVar3 = FUN_01d70da0();
      iVar4 = FUN_01d6fde0();
      if (iVar3 < iVar4) goto joined_r0x0011f753;
    }
  }
  FUN_01d6fde0();
  FUN_01d6ed40();
joined_r0x0011f753:
  if ((cVar6 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}


