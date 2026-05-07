// Function: FUN_01c26760
// Address: 01c26760
// Size: 578 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x01c2691a) */
/* WARNING: Removing unreachable block (ram,0x01c26923) */
/* WARNING: Removing unreachable block (ram,0x01c26863) */
/* WARNING: Removing unreachable block (ram,0x01c2686c) */
/* WARNING: Removing unreachable block (ram,0x01c2698a) */
/* WARNING: Removing unreachable block (ram,0x01c26997) */
/* WARNING: Removing unreachable block (ram,0x01c268a0) */
/* WARNING: Removing unreachable block (ram,0x01c268c0) */
/* WARNING: Removing unreachable block (ram,0x01c268a2) */
/* WARNING: Removing unreachable block (ram,0x01c268c2) */

void FUN_01c26760(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  longlong *local_98;
  char local_90;
  longlong *local_60;
  char local_58;
  int local_48;
  
  lVar1 = *unaff_RSI;
  if ((lVar1 != 0) && (*(longlong *)(unaff_RDI + 0x180) != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        plVar2 = local_60;
        FUN_01ed4a00();
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01c26874;
          }
        }
        else if (local_60 != (longlong *)0x0) {
LAB_01c26874:
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          local_48 = -1;
          do {
            lVar4 = (longlong)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((longlong)plVar2 + 0xc) <= local_48) goto LAB_01c267e0;
            local_60 = *(longlong **)(plVar2[2] + 8 + lVar4 * 8);
            (**(code **)(*local_60 + 0x388))();
            cVar3 = (**(code **)(*local_98 + 0x50))();
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          } while (cVar3 == '\0');
          FUN_01ed2f40();
LAB_01c267e0:
          FUN_0038d420();
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  return;
}


