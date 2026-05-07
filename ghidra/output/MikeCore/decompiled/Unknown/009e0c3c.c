// Function: FUN_009e0c3c
// Address: 009e0c3c
// Size: 626 bytes
// Class: Unknown
// String references:
//   "  The error occurred while parsing the regular expression fragment: '"
//   "  The error occurred while parsing the regular expression: '"
//   ">>>HERE>>>"
//   "'."


/* WARNING: Type propagation algorithm not settling */

void FUN_009e0c3c(undefined8 param_1,char *param_2,char *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  char *pcVar3;
  ulong uVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 local_50;
  char *local_48;
  undefined1 *local_40;
  
  lVar2 = *unaff_RDI;
  if (*(int *)(lVar2 + 0x2c) == 0) {
    *(int *)(lVar2 + 0x2c) = unaff_ESI;
  }
  unaff_RDI[0x11] = unaff_RDI[0x10];
  pcVar7 = (char *)((longlong)&MACH_HEADER.cpusubtype + 2);
  if (9 < (longlong)param_2) {
    pcVar7 = param_2;
  }
  pcVar7 = (char *)((longlong)pcVar7 + 0xfffffffffffffff6);
  if (param_3 != param_2) {
    pcVar7 = param_3;
  }
  pcVar3 = (char *)(unaff_RDI[0x10] - unaff_RDI[0xf]);
  pcVar8 = (char *)((longlong)param_2 + 10U);
  if ((longlong)pcVar3 <= (longlong)param_2 + 10U) {
    pcVar8 = pcVar3;
  }
  if (unaff_ESI != 0x11) {
    std::string::append(pcVar3);
    if (pcVar7 != pcVar8) {
      lVar2 = unaff_RDI[0xf];
      pcVar6 = param_2 + (lVar2 - (longlong)(pcVar7 + lVar2));
      if ((char *)0xffffffffffffffef < pcVar6) {
LAB_009e0ea5:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pcVar6 < "") {
        bVar5 = (char)pcVar6 * '\x02';
        puVar1 = (undefined1 *)((longlong)&local_50 + 1);
        local_50 = CONCAT71(local_50._1_7_,bVar5);
      }
      else {
        puVar1 = operator_new((ulong)pcVar3);
        local_50 = (ulonglong)(pcVar6 + 0x10) & 0xfffffffffffffff0 | 1;
        bVar5 = (byte)(pcVar6 + 0x10) & 0xf0 | 1;
        local_48 = pcVar6;
        local_40 = puVar1;
      }
      if (pcVar7 != param_2) {
        pcVar3 = (char *)0x0;
        do {
          puVar1[(longlong)pcVar3] = (pcVar7 + lVar2)[(longlong)pcVar3];
          pcVar3 = (char *)((longlong)pcVar3 + 1);
        } while ((char *)((longlong)param_2 - (longlong)pcVar7) != pcVar3);
        puVar1 = puVar1 + (longlong)pcVar3;
      }
      *puVar1 = 0;
      if ((bVar5 & 1) == 0) {
        uVar4 = (ulong)(bVar5 >> 1);
      }
      else {
        uVar4 = (ulong)local_48;
      }
      std::string::append(pcVar3,uVar4);
      if ((local_50 & 1) != 0) {
        operator_delete(pcVar3);
      }
      std::string::append(pcVar3);
      lVar2 = unaff_RDI[0xf];
      pcVar7 = pcVar8 + (lVar2 - (longlong)(param_2 + lVar2));
      if ((char *)0xffffffffffffffef < pcVar7) goto LAB_009e0ea5;
      if (pcVar7 < "") {
        bVar5 = (char)pcVar7 * '\x02';
        puVar1 = (undefined1 *)((longlong)&local_50 + 1);
        local_50 = CONCAT71(local_50._1_7_,bVar5);
      }
      else {
        puVar1 = operator_new((ulong)pcVar3);
        local_50 = (ulonglong)(pcVar7 + 0x10) & 0xfffffffffffffff0 | 1;
        bVar5 = (byte)(pcVar7 + 0x10) & 0xf0 | 1;
        local_48 = pcVar7;
        local_40 = puVar1;
      }
      if (pcVar8 != param_2) {
        pcVar3 = (char *)0x0;
        do {
          puVar1[(longlong)pcVar3] = (param_2 + lVar2)[(longlong)pcVar3];
          pcVar3 = (char *)((longlong)pcVar3 + 1);
        } while ((char *)((longlong)pcVar8 - (longlong)param_2) != pcVar3);
        puVar1 = puVar1 + (longlong)pcVar3;
      }
      *puVar1 = 0;
      if ((bVar5 & 1) == 0) {
        uVar4 = (ulong)(bVar5 >> 1);
      }
      else {
        uVar4 = (ulong)local_48;
      }
      std::string::append(pcVar3,uVar4);
      if ((local_50 & 1) != 0) {
        operator_delete(pcVar3);
      }
    }
    std::string::append(pcVar3);
    lVar2 = *unaff_RDI;
  }
  if ((*(byte *)(lVar2 + 0x2a) & 4) == 0) {
    FUN_00acde90(param_2,unaff_ESI);
    FUN_00acdf00();
    FUN_00acded0();
  }
  return;
}


