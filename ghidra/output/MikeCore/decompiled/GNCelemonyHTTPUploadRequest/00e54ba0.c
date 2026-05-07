// Function: FUN_00e54ba0
// Address: 00e54ba0
// Size: 895 bytes
// Class: GNCelemonyHTTPUploadRequest


/* WARNING: Removing unreachable block (ram,0x00e54cc7) */
/* WARNING: Removing unreachable block (ram,0x00e54cd3) */

ulonglong FUN_00e54ba0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  undefined4 local_6c;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  longlong local_30;
  char local_28;
  
  uVar5 = 0;
  cVar4 = FUN_00dac2f0(0,6);
  if ((cVar4 == '\0') || (local_36 != 'G')) goto LAB_00e54cdc;
  if ((local_35 == 'N') &&
     ((((local_34 == 'B' && (local_33 == 'K')) && (local_32 == 'V')) &&
      ((local_31 == 'A' && (cVar4 = FUN_00dabce0(), cVar4 != '\0')))))) {
    FUN_00daa9c0();
    cVar4 = FUN_00dabce0();
    if (cVar4 != '\0') {
      FUN_00daa990();
      cVar4 = FUN_00dab510();
      if (((cVar4 != '\0') && ((int)unaff_RDI[5] - 2U < 5)) &&
         (cVar4 = FUN_00dab510(), lVar3 = DAT_027867a8, lVar2 = DAT_027867a0, lVar1 = DAT_02786798,
         cVar4 != '\0')) {
        switch(local_6c) {
        case 0:
          (**(code **)(*unaff_RDI + 0x600))();
          uVar5 = CONCAT71((int7)((ulonglong)(unaff_RDI + 5) >> 8),1);
          goto LAB_00e54cdc;
        case 1:
          if (DAT_02786798 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          break;
        case 2:
          if (DAT_027867a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          break;
        case 3:
          if (DAT_027867a8 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          break;
        default:
          goto switchD_00e54c95_default;
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
        goto LAB_00e54cdc;
      }
    }
  }
switchD_00e54c95_default:
  uVar5 = 0;
LAB_00e54cdc:
  return uVar5 & 0xffffffff;
}


