// Function: FUN_01ee52b0
// Address: 01ee52b0
// Size: 1205 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01ee5708) */
/* WARNING: Removing unreachable block (ram,0x01ee5714) */
/* WARNING: Removing unreachable block (ram,0x01ee569d) */
/* WARNING: Removing unreachable block (ram,0x01ee56a6) */
/* WARNING: Removing unreachable block (ram,0x01ee551d) */
/* WARNING: Removing unreachable block (ram,0x01ee5526) */
/* WARNING: Removing unreachable block (ram,0x01ee55a5) */
/* WARNING: Removing unreachable block (ram,0x01ee55ae) */
/* WARNING: Removing unreachable block (ram,0x01ee5627) */
/* WARNING: Removing unreachable block (ram,0x01ee5630) */
/* WARNING: Removing unreachable block (ram,0x01ee56c1) */
/* WARNING: Removing unreachable block (ram,0x01ee56cd) */
/* WARNING: Removing unreachable block (ram,0x01ee571f) */
/* WARNING: Removing unreachable block (ram,0x01ee5728) */
/* WARNING: Removing unreachable block (ram,0x01ee547e) */
/* WARNING: Removing unreachable block (ram,0x01ee5487) */

void FUN_01ee52b0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_40;
  char local_38;
  
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x420))();
  lVar2 = DAT_02774d50;
  plVar6 = (longlong *)*unaff_RSI;
  if (DAT_02774d50 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x400))();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_01ee53b2;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_01ee53ad;
    }
  }
  else {
    lVar4 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_40;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01ee53ad:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01ee53b2:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01ee53c6;
    }
    *unaff_RSI = local_40;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_01ee53c6:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar6 + 0x18))();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_00d07ad0();
  if (local_40 == 0) {
    bVar3 = true;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  lVar2 = DAT_027fec88;
  if (DAT_027fec88 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027fec90;
  if (DAT_027fec90 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027092b8;
  if (DAT_027092b8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027648d0;
  if (DAT_027648d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ca5c10();
  FUN_00c91c80();
  if (!bVar3 && local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


