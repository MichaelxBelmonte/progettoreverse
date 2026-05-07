// Function: FUN_012e0640
// Address: 012e0640
// Size: 1232 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x012e079a) */
/* WARNING: Removing unreachable block (ram,0x012e07a3) */
/* WARNING: Removing unreachable block (ram,0x012e087b) */
/* WARNING: Removing unreachable block (ram,0x012e0884) */
/* WARNING: Removing unreachable block (ram,0x012e0959) */
/* WARNING: Removing unreachable block (ram,0x012e0962) */

void FUN_012e0640(undefined *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    if ((DAT_028aca30 == (undefined8 *)0x0) || (puVar3 = DAT_028aca30, DAT_028aca39 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028aca30 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = &DAT_02572358;
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        bVar8 = DAT_028aca30 == (undefined8 *)0x0;
        DAT_028aca30 = puVar3;
        if (((bVar8) || (FUN_00d50b20(), DAT_028aca30 != (undefined8 *)0x0)) &&
           (DAT_028aca38 == '\0')) {
          DAT_028aca38 = '\x01';
          FUN_00e8cb90();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027e1e80;
        if (DAT_027e1e80 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027bf048;
        if (DAT_027bf048 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        lVar6 = DAT_027bf050;
        if (DAT_027bf050 != 0) {
          FUN_00d50b00();
        }
        FUN_00c837f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        DAT_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = DAT_028aca30;
      }
      else {
        DAT_028aca39 = '\x01';
        FUN_00e8cb70();
        puVar3 = DAT_028aca30;
      }
    }
    DAT_028aca30 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      if (0 < *(int *)((longlong)puVar3 + 0xc)) {
        lVar6 = 0;
        do {
          uVar1 = *(undefined8 *)(puVar3[2] + lVar6 * 8);
          FUN_00c77cd0();
          FUN_00c7b220();
          iVar2 = FUN_00e82730();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar7 = (longlong *)*unaff_RSI;
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            plVar7 = (longlong *)*unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x218))();
          (**(code **)(*unaff_RDI + 0x218))();
          iVar2 = _memcmp(param_1,(void *)(longlong)iVar2,param_3);
          if (iVar2 != 0) {
            param_1 = (undefined *)((longlong)&MACH_HEADER.magic + 1);
            (**(code **)(*unaff_RDI + 0x208))(1,uVar1);
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)((longlong)puVar3 + 0xc));
      }
      FUN_00cc1480();
    }
  }
  return;
}


