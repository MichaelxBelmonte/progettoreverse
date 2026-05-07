// Function: FUN_00ab628a
// Address: 00ab628a
// Size: 725 bytes
// Class: OsSignatureMac


/* WARNING: Removing unreachable block (ram,0x00ab6508) */
/* WARNING: Removing unreachable block (ram,0x00ab653e) */

undefined8 FUN_00ab628a(string *param_1,string *param_2,byte *param_3,byte *param_4)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  string *psVar4;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_res8;
  byte local_e0;
  uint local_c8;
  byte local_68;
  byte local_50;
  undefined7 uStack_4f;
  string *local_48;
  undefined8 local_40;
  
  if (param_3 != (byte *)0x0) {
    std::string::operator=(param_1,param_2);
  }
  if (param_4 != (byte *)0x0) {
    std::string::operator=(param_1,param_2);
  }
  if (local_res8 != 0) {
    std::string::operator=(param_1,param_2);
  }
  if (*(longlong *)(unaff_RSI + 0x40) != 0) {
    std::string::string(param_1,param_2);
    iVar2 = FUN_00ac9910();
    if ((local_68 & 1) != 0) {
      operator_delete(param_1);
    }
    if (iVar2 == 0) goto LAB_00ab639d;
  }
  pvVar3 = operator_new((ulong)param_1);
  param_1 = (string *)0x0;
  FUN_00a13996(0,0,1);
  plVar1 = *(longlong **)(unaff_RSI + 0x40);
  *(void **)(unaff_RSI + 0x40) = pvVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
LAB_00ab639d:
  FUN_00a14b14();
  FUN_00a14042();
  psVar4 = (string *)0x0;
  FUN_00ac92d0();
  if (local_c8 < 2) {
    std::string::operator=(param_1,psVar4);
  }
  else {
    std::string::operator=(param_1,psVar4);
  }
  FUN_00ab6118();
  std::string::string(param_1,psVar4);
  std::string::string(param_1,psVar4);
  FUN_00ac9740();
  if ((local_50 & 1) != 0) {
    operator_delete(param_1);
  }
  if (param_3 != (byte *)0x0) {
    FUN_00a13d4a();
    if ((*param_3 & 1) != 0) {
      operator_delete(param_1);
    }
    *(undefined8 *)(param_3 + 0x10) = local_40;
    *(string **)(param_3 + 8) = local_48;
    *(ulonglong *)param_3 = CONCAT71(uStack_4f,local_50);
    param_1 = local_48;
  }
  if (param_4 != (byte *)0x0) {
    psVar4 = (string *)0x0;
    FUN_00a147bc();
    if ((*param_4 & 1) != 0) {
      operator_delete(param_1);
    }
    *(undefined8 *)(param_4 + 0x10) = local_40;
    *(string **)(param_4 + 8) = local_48;
    *(ulonglong *)param_4 = CONCAT71(uStack_4f,local_50);
    param_1 = local_48;
  }
  if (local_res8 != 0) {
    std::string::operator=(param_1,psVar4);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(param_1);
  }
  return unaff_RDI;
}


