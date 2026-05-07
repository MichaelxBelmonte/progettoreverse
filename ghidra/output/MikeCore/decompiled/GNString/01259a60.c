// Function: FUN_01259a60
// Address: 01259a60
// Size: 549 bytes
// Class: GNString
// String references:
//   "_sourceTimeForElementTimeFunction"
//   "_warpTimeForElementTimeFunction"


/* WARNING: Removing unreachable block (ram,0x01259c32) */
/* WARNING: Removing unreachable block (ram,0x01259c3b) */
/* WARNING: Removing unreachable block (ram,0x01259ba6) */
/* WARNING: Removing unreachable block (ram,0x01259baf) */
/* WARNING: Removing unreachable block (ram,0x01259c6a) */
/* WARNING: Removing unreachable block (ram,0x01259c73) */
/* WARNING: Removing unreachable block (ram,0x01259b59) */
/* WARNING: Removing unreachable block (ram,0x01259b62) */

void FUN_01259a60(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar3 = DAT_027bebd8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027bebd8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar1 + 0x590))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027bebd8;
  if (cVar2 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027bebd8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_0006e1c0();
    lVar3 = FUN_00e85ef0();
    if (lVar3 == 0) {
      lVar3 = FUN_00e858c0();
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
    }
    (**(code **)(*unaff_RDI + 0x200))(0,uVar4,0);
    unaff_RDI[0x29] = -0x4010000000000000;
    FUN_0006e1c0();
    lVar3 = FUN_00e85ef0();
    if (lVar3 == 0) {
      lVar3 = FUN_00e858c0();
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
    }
    (**(code **)(*unaff_RDI + 0x200))(0,uVar4,0);
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d61ea0();
  return;
}


