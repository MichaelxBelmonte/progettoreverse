// Function: FUN_01400c50
// Address: 01400c50
// Size: 558 bytes
// Class: MUDataPointFunction


/* WARNING: Removing unreachable block (ram,0x01400d1b) */
/* WARNING: Removing unreachable block (ram,0x01400d24) */

longlong * FUN_01400c50(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  uint local_4c;
  longlong local_48;
  char local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      local_4c = (uint)param_3;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
        cVar5 = (**(code **)(*(longlong *)*param_1 + 0x50))();
        if (cVar5 == '\0') {
          local_68 = '\0';
          local_60 = *param_1;
          local_58 = '\0';
          local_70 = lVar2;
          FUN_00d98db0(&local_60,&local_70,local_4c);
          lVar4 = local_48;
          lVar2 = *unaff_RSI;
          if (lVar2 == local_48) {
            if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
              if (local_40 != '\0') goto LAB_01400da0;
              FUN_00d50b00();
              goto LAB_01400ddd;
            }
LAB_01400de5:
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar3 = unaff_RSI[1];
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              *unaff_RSI = lVar4;
              if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01400ddd:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              goto LAB_01400de5;
            }
            *unaff_RSI = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400da0:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_40 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
  return unaff_RDI;
}


